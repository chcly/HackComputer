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
#pragma once
#include "Assembler/Token.h"
#include "Utils/ParserBase/ScannerBase.h"

namespace Hack::Assembler
{
    class Scanner final : public ScannerBase
    {
    private:
        size_t _fsr, _offs;

        void initializeTables();

        void scanDecimal(Token& tok);

        void scanSymbol(Token& tok);

        bool extractRSymbol(Token& tok);

        void readSymbol(String& dest) const;

        bool testSingleRegister(Token& tok);

        bool testMultipleRegisterAndJump(Token& tok) const;

    public:
        Scanner();

        void scan(Token& tok) override;

        // gets the offset from zero for
        // the first static register
        size_t firstStaticRegister() const;

        size_t nextStaticRegister();
    };
} // namespace Hack::Assembler
