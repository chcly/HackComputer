/*
-------------------------------------------------------------------------------
    Copyright (c) Charles Carley.

  This software is provided 'as-is', without any express or implied
  warranty. In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
-------------------------------------------------------------------------------
*/
#include "Assembler/Scanner.h"
#include "Utils/Char.h"

using namespace Hack;

namespace Hack::Assembler
{
    struct KeywordTable
    {
        char   a, b, c;
        int8_t tok;
    };

    struct ReservedWordTable
    {
        const char* val;
        size_t      len;
        uint16_t    address;
    };

    constexpr KeywordTable DestAndJumpTable[] = {
        {'J', 'M', 'P', TOK_JMP},
        {'J', 'G', 'T', TOK_JGT},
        {'J', 'E', 'Q', TOK_JEQ},
        {'J', 'G', 'E', TOK_JGE},
        {'J', 'L', 'T', TOK_JLT},
        {'J', 'N', 'E', TOK_JNE},
        {'J', 'L', 'E', TOK_JLE},
        {'A', 'M', 'D', TOK_AMD},
        {'A', 'D', 0x0, TOK_AD},
        {'A', 'M', 0x0, TOK_AM},
        {'M', 'D', 0x0, TOK_MD},
    };

    // clang-format off
    constexpr ReservedWordTable ReservedAddresses[] = {
        {"SP", 2, 0x0000},
        {"LCL", 3, 0x0001},
        {"ARG", 3, 0x0002},
        {"THIS", 4, 0x0003},
        {"THAT", 4, 0x0004},
        {"SCREEN", 5, 0x4000},
        {"KBD", 3, 0x6000},
    };
    // clang-format on

    Scanner::Scanner() :
        _fsr(0),
        _offs(0)
    {
        initializeTables();
    }

    void Scanner::initializeTables()
    {
        // Save 0 - 15 as a string.
        for (int i = 0; i < 16; ++i)
            save(Char::toString(i));

        // determine the first static register.
        _fsr = _stringTable.size();

        // pre save all the reserved names
        for (const ReservedWordTable& res : ReservedAddresses)
        {
            save(res.val);

            // if it's not already saved, save it as well.
            if (res.address > 16)
                save(Char::toString(res.address));
        }
    }

    void Scanner::scanDecimal(Token& tok)
    {
        int ch = _stream->get();
        if (ch == '1' || ch == '0')
        {
            // Check the next characters.

            const char lh = (char)_stream->peek();
            if (!(lh >= '0' && lh <= '9'))
            {
                tok.setType(ch == '1' ? TOK_ONE : TOK_ZERO);
                return;
            }
        }

        _stream->putback((char)ch);

        String v;
        while (isDecimal(ch))
        {
            ch = _stream->get();
            if (isDecimal(ch))
                v.push_back((char)ch);
        }

        tok.setType(TOK_INTEGER);
        tok.setIndex(save(v));

        if (ch > -1)
            _stream->putback((char)ch);
    }

    size_t Scanner::firstStaticRegister() const
    {
        return _fsr;
    }

    size_t Scanner::nextStaticRegister()
    {
        const size_t r = _fsr + _offs;
        ++_offs;
        return r;
    }

    bool Scanner::extractRSymbol(Token& tok)
    {
        String str;

        int ch = _stream->get();
        while (isDecimal(ch))
        {
            str.push_back((char)ch);
            ch = _stream->get();
        }

        _stream->putback((char)ch);

        const uint64_t iv = Char::toUint64(str);

        if (iv < 16)
        {
            tok.setType(TOK_INTEGER);
            tok.setIndex(save(str));
            return true;
        }
        return false;
    }

    void Scanner::readSymbol(String& dest) const
    {
        int ch = _stream->get();
        dest.clear();

        // The first should be a letter prior
        // to entry into this method.

        while (isLetter(ch) || isDecimal(ch) || ch == '.' || ch == '_')
        {
            dest.push_back((char)ch);
            ch = _stream->get();
        }

        _stream->putback((char)ch);
    }

    bool Scanner::testSingleRegister(Token& tok)
    {
        // This tries to resolve the case of
        // a single destination register
        //
        // for example, A=<expression>

        const int ch = _stream->get();
        const int nx = _stream->peek();

        if (!isLetter(nx))
        {
            switch (ch)
            {
            case 'A':
                tok.setType(TOK_A);
                return true;
            case 'D':
                tok.setType(TOK_D);
                return true;
            case 'M':
                tok.setType(TOK_M);
                return true;
            case 'R':
                if (isDecimal(nx) && extractRSymbol(tok))
                    return true;[[fallthrough]];
            default:
                // just keep going
                break;
            }
        }

        _stream->putback((char)ch);
        return false;
    }

    bool Scanner::testMultipleRegisterAndJump(Token& tok) const
    {
        // This tries to resolve the case of
        // a multiple destination registers
        //
        // for example, MD=<expression>

        const int pc = _stream->get();
        const int ch = _stream->get();
        int       nx = _stream->peek();

        if (!isLetter(nx))
            nx = '\0';

        for (const KeywordTable& djt : DestAndJumpTable)
        {
            if (pc == djt.a && ch == djt.b && nx == djt.c)
            {
                if (nx != 0)
                {
                    // consume the next
                    _stream->get();
                }

                tok.setType(djt.tok);
                return true;
            }
        }

        _stream->putback((char)ch);
        _stream->putback((char)pc);
        return false;
    }

    void Scanner::scanSymbol(Token& tok)
    {
        // Test the simple case first
        if (testSingleRegister(tok))
            return;

        // Test the multiple destination case, as
        // well as the jump symbols.
        if (testMultipleRegisterAndJump(tok))
            return;

        // nothing has been ruled out, so read what's
        // available and test it against reserved words

        String buf;
        readSymbol(buf);

        for (const ReservedWordTable& ele : ReservedAddresses)
        {
            if (Char::equals(buf.c_str(),
                             ele.val,
                             std::min(buf.size(), ele.len)))
            {
                tok.setType(TOK_INTEGER);
                tok.setIndex(_stringTable.get(Char::toString(ele.address)));
                return;
            }
        }

        // any other string should be saved and looked back up
        tok.setType(TOK_LABEL);

        tok.setIndex(save(buf));
    }

    void Scanner::scan(Token& tok)
    {
        if (_stream == nullptr)
            throw Exception("no stream was supplied to the scanner");

        tok.clear();

        int ch;
        while ((ch = _stream->get()) > 0)
        {
            tok.setLine(_line);

            switch (ch)
            {
            case '#':
                scanLineComment();
                break;
            case '/':
                if (_stream->peek() == '/')
                    scanLineComment();
                break;
            case '@':
                tok.setType(TOK_AT);
                return;
            case '-':
                tok.setType(TOK_MINUS);
                return;
            case '&':
                tok.setType(TOK_AND);
                return;
            case '|':
                tok.setType(TOK_OR);
                return;
            case '!':
                tok.setType(TOK_NOT);
                return;
            case ';':
                tok.setType(TOK_SEMI_COLON);
                return;
            case '+':
                tok.setType(TOK_PLUS);
                return;
            case '=':
                tok.setType(TOK_EQUAL);
                return;
            case '(':
                tok.setType(TOK_L_PAREN);
                return;
            case ')':
                tok.setType(TOK_R_PAREN);
                return;
            case Digits09:
                _stream->putback((char)ch);
                scanDecimal(tok);
                return;
            case '_':
            case LowerCaseAz:
            case UpperCaseAz:
                _stream->putback((char)ch);
                scanSymbol(tok);
                return;
            case '\r':
            case '\n':
                if (ch == '\r' && _stream->peek() == '\n')
                    _stream->get();
                _line++;
                break;
            case ' ':
            case '\t':
                scanWhiteSpace();
                break;
            default:
                syntaxError("unknown character parsed '", (char)ch, '\'');
            }
        }
        tok.setType(TOK_EOF);
    }
} // namespace Hack::Assembler
