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
#include "VirtualMachine/Parser.h"
#include <fstream>
#include "Utils/Char.h"
#include "VirtualMachine/Scanner.h"
#include "VirtualMachine/Token.h"

namespace Hack::VirtualMachine
{
    Parser::Parser()
    {
        _scanner = new Scanner();
    }

    Parser::~Parser()
    {
        delete _scanner;
        _scanner = nullptr;
    }

    void Parser::pushExpression()
    {
        const int8_t t0 = getToken(1).getType();
        const int8_t t1 = getToken(2).getType();

        if (t1 != TOK_INTEGER)
        {
            parseError(
                "Expected an integer to be the third argument to the push "
                "expression\n"
                "push <segment:keyword> <index:int>");
        }

        const size_t idx = getToken(2).getIndex();

        switch (t0)
        {
        case TOK_LOCAL:
            _emitter.pushLocal(_scanner->integer(idx));
            break;
        case TOK_ARGUMENT:
            _emitter.pushArgument(_scanner->integer(idx));
            break;
        case TOK_THIS:
            _emitter.pushThis(_scanner->integer(idx));
            break;
        case TOK_THAT:
            _emitter.pushThat(_scanner->integer(idx));
            break;
        case TOK_STATIC:
            _emitter.pushStatic(_file, _scanner->integer(idx));
            break;
        case TOK_TEMP:
            _emitter.pushTemp(_scanner->integer(idx));
            break;
        case TOK_POINTER:
            _emitter.pushPointer(_scanner->integer(idx));
            break;
        case TOK_CONSTANT:
            _emitter.pushConstant(_scanner->integer(idx));
            break;
        default:
            parseError(
                "Unknown keyword parsed.\nExpected "
                "argument, local, static, constant, "
                "this, that, pointer or temp.\n"
                "push <segment:keyword> <index:int>");
        }
    }

    void Parser::popExpression()
    {
        const int8_t t0 = getToken(1).getType();
        const int8_t t1 = getToken(2).getType();

        if (t1 != TOK_INTEGER)
        {
            parseError(
                "Expected an integer to be the third argument to the pop "
                "expression\n"
                "pop <segment:keyword> <index:int>");
        }

        const size_t idx = getToken(2).getIndex();

        switch (t0)
        {
        case TOK_LOCAL:
            _emitter.popLocal(_scanner->integer(idx));
            break;
        case TOK_ARGUMENT:
            _emitter.popArgument(_scanner->integer(idx));
            break;
        case TOK_THIS:
            _emitter.popThis(_scanner->integer(idx));
            break;
        case TOK_THAT:
            _emitter.popThat(_scanner->integer(idx));
            break;
        case TOK_TEMP:
            _emitter.popTemp(_scanner->integer(idx));
            break;
        case TOK_STATIC:
            _emitter.popStatic(_file, _scanner->integer(idx));
            break;
        case TOK_POINTER:
            _emitter.popPointer(_scanner->integer(idx));
            break;
        case TOK_CONSTANT:
        default:
            parseError(
                "Unknown keyword parsed.\nExpected "
                "argument, local, static, constant, "
                "this, that, pointer or temp.\n"
                "pop <segment:keyword> <index:int>");
        }
    }

    void Parser::labelExpression()
    {
        const int8_t t0 = getToken(1).getType();
        if (t0 != TOK_IDENTIFIER)
        {
            parseError(
                "Expected an identifier to "
                "follow the label expression\n"
                "label <name:identifier>");
        }

        const size_t idx = getToken(1).getIndex();

        String value;
        _scanner->string(value, idx);
        if (value.empty())
            parseError("An empty label was found");

        _labels.save(value);
        _emitter.writeLabel(value);
    }

    void Parser::gotoExpression()
    {
        const int8_t t0 = getToken(0).getType();
        const int8_t t1 = getToken(1).getType();
        if (t1 != TOK_IDENTIFIER)
        {
            parseError(
                "Expected an identifier to "
                "follow the goto expression\n"
                "goto <name:identifier>");
        }

        const size_t idx = getToken(1).getIndex();

        String value;
        _scanner->string(value, idx);

        if (value.empty())
            parseError("An empty label was found");

        if (t0 == TOK_IF_GOTO)
            _emitter.writIfGoto(value);
        else
            _emitter.writGoto(value);
    }

    void Parser::functionExpression()
    {
        const int8_t t1 = getToken(1).getType();
        if (t1 != TOK_IDENTIFIER)
        {
            parseError(
                "Expected an identifier to "
                "follow the function expression\n"
                "function <name:identifier> <num-locals:int>");
        }

        const int8_t t2 = getToken(2).getType();
        if (t2 != TOK_INTEGER)
        {
            parseError(
                "Expected an integer to "
                "follow the after the function label\n"
                "function <name:identifier> <num-locals:int>");
        }

        String name;
        _scanner->string(name, getToken(1).getIndex());
        if (name.empty())
            parseError("An empty label was found");

        const int locals = _scanner->integer(getToken(2).getIndex());

        _emitter.writeFunction(name, locals);
    }

    void Parser::callExpression()
    {
        const int8_t t1 = getToken(1).getType();
        if (t1 != TOK_IDENTIFIER)
        {
            parseError(
                "Expected an identifier to "
                "follow the call expression\n"
                "call <name:identifier> <num-args:int>");
        }

        const int8_t t2 = getToken(2).getType();
        if (t2 != TOK_INTEGER)
        {
            parseError(
                "Expected an integer to "
                "follow the after the call label\n"
                "call <name:identifier> <num-args:int>");
        }

        String name;
        _scanner->string(name, getToken(1).getIndex());
        if (name.empty())
            parseError("An empty label was found");

        const int args = _scanner->integer(getToken(2).getIndex());

        _emitter.writeCall(name, args);
    }

    void Parser::setExpression()
    {
        const int8_t t1 = getToken(1).getType();
        if (t1 != TOK_INTEGER)
        {
            parseError(
                "Expected an integer to "
                "follow the set expression\n"
                "set <ram-index:int> <ram-value:int>");
        }

        const int8_t t2 = getToken(2).getType();
        if (t2 != TOK_INTEGER)
        {
            parseError(
                "Expected an integer to "
                "follow the set expression\n"
                "set <ram-index:int> <ram-value:int>");
        }

        const int idx = _scanner->integer(getToken(1).getIndex());

        const int val = _scanner->integer(getToken(2).getIndex());

        _emitter.setRam(idx, val);
    }

    void Parser::inlineAsm()
    {
        String   code;
        Scanner* scn = (Scanner*)_scanner;
        scn->getCode(code, getToken(0).getIndex());

        _emitter.writeCode(code);
        advanceCursor();
    }

    void Parser::expression()
    {
        const int8_t t0 = getToken(0).getType();
        switch (t0)
        {
        case TOK_ASM:
            inlineAsm();
            break;
        case TOK_PUSH:
            pushExpression();
            advanceCursor(3);
            break;
        case TOK_POP:
            popExpression();
            advanceCursor(3);
            break;
        case TOK_AND:
            _emitter.writeAnd();
            advanceCursor();
            break;
        case TOK_OR:
            _emitter.writeOr();
            advanceCursor();
            break;
        case TOK_ADD:
            _emitter.writeAdd();
            advanceCursor();
            break;
        case TOK_SUB:
            _emitter.writeSub();
            advanceCursor();
            break;
        case TOK_NOT:
            _emitter.writeNot();
            advanceCursor();
            break;
        case TOK_NEG:
            _emitter.writeNeg();
            advanceCursor();
            break;
        case TOK_EQ:
            _emitter.writeEq();
            advanceCursor();
            break;
        case TOK_LT:
            _emitter.writeLt();
            advanceCursor();
            break;
        case TOK_GT:
            _emitter.writeGt();
            advanceCursor();
            break;
        case TOK_RESET:
            _emitter.writeReset();
            advanceCursor();
            break;
        case TOK_HALT:
            _emitter.writeHalt();
            advanceCursor();
            break;
        case TOK_IF_GOTO:
        case TOK_GOTO:
            gotoExpression();
            advanceCursor(2);
            break;
        case TOK_LABEL:
            labelExpression();
            advanceCursor(2);
            break;
        case TOK_RETURN:
            _emitter.writeReturn();
            advanceCursor();
            break;
        case TOK_CALL:
            callExpression();
            advanceCursor(3);
            break;
        case TOK_SET:
            setExpression();
            advanceCursor(3);
            break;
        case TOK_FUNCTION:
            functionExpression();
            advanceCursor(3);
            break;
        default:
            parseError("An unknown rule was found (id: ", (int)t0, ")");
        }
    }

    void Parser::parseImpl(IStream& is)
    {
        // make sure the token cursor is at zero
        // initially and attach the input stream
        // to the scanner
        _cursor = 0;
        _scanner->attach(&is, _filePath);

        // clear the stream
        _emitter.clear();

        while (_cursor <= (int32_t)_tokens.size())
        {
            const int8_t tok = getToken(0).getType();
            if (tok == TOK_EOF)
                break;

            const int32_t op = _cursor;
            expression();

            // if the cursor did not
            // advance force it to.
            if (op == _cursor)
                advanceCursor();
        }
    }

    void Parser::writeImpl(OStream& os, int)
    {
        const String str = _emitter.stream().str();
        os.write(str.c_str(), str.size());
    }
}  // namespace Hack::VirtualMachine
