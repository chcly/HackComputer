<a id="analyzer"></a>
<h1>Analyzer</h1>
<a id="namespacehack_1_1compiler_1_1analyzer"></a>
<a href="https://github.com/CharlesCarley/HackComputer#~">~</a>
<a href="index.md#index">HackComputer</a>
<span class="inline-text">/</span>
<a href="namespaceHack.md#hack">Hack</a>
<span class="inline-text">::</span>
<a href="namespaceHack_1_1Compiler.md#compiler">Compiler</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>Analyzer</b></span>
<br/>
<br/>
<a id="classes"></a>
<h2>Classes</h2>
<div class="icon-link">
<img src="../images/class.svg"/><a href="structHack_1_1Compiler_1_1Analyzer_1_1KeywordTable.md#keywordtable">KeywordTable</a>
</div>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classHack_1_1Compiler_1_1Analyzer_1_1Parser.md#parser">Parser</a>
</div>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classHack_1_1Compiler_1_1Analyzer_1_1ParseUtils.md#parseutils">ParseUtils</a>
</div>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classHack_1_1Compiler_1_1Analyzer_1_1Scanner.md#scanner">Scanner</a>
</div>
<a id="enums"></a>
<h2>Enums</h2>
<span class="icon-list-item"><a href="#tokentype" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">TokenType</span>
</a>
</span>
<br/>
<a id="typedefs"></a>
<h2>Typedefs</h2>
<span class="icon-list-item"><a href="#codecache" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">CodeCache</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#nu" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">Nu</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#pu" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">Pu</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#token" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">Token</span>
</a>
</span>
<br/>
<a id="variables"></a>
<h2>Variables</h2>
<span class="icon-list-item"><a href="#reserved" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">Reserved</span>
</a>
</span>
<br/>
<a id="functions"></a>
<h2>Functions</h2>
<span class="icon-list-item"><a href="#isvalidcharacter" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">isValidCharacter</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L31" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#analyzer" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<a id="tokentype"></a>
<h2>TokenType</h2>
<span class="bold-text"><b>TokenType</b></span>
<br/>
<a id="tokerror"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokError</span>
</span>
</div>
<a id="tokeof"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokEof</span>
</span>
</div>
<a id="toknull"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokNull</span>
</span>
</div>
<a id="tokint"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokInt</span>
</span>
</div>
<a id="tokid"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokId</span>
</span>
</div>
<a id="tokstring"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokString</span>
</span>
</div>
<a id="tokkwclass"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwClass</span>
</span>
</div>
<a id="tokkwconstructor"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwConstructor</span>
</span>
</div>
<a id="tokkwfunction"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwFunction</span>
</span>
</div>
<a id="tokkwmethod"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwMethod</span>
</span>
</div>
<a id="tokkwfield"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwField</span>
</span>
</div>
<a id="tokkwstatic"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwStatic</span>
</span>
</div>
<a id="tokkwvar"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwVar</span>
</span>
</div>
<a id="tokkwint"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwInt</span>
</span>
</div>
<a id="tokkwchar"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwChar</span>
</span>
</div>
<a id="tokkwbool"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwBool</span>
</span>
</div>
<a id="tokkwvoid"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwVoid</span>
</span>
</div>
<a id="tokkwlet"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwLet</span>
</span>
</div>
<a id="tokkwdo"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwDo</span>
</span>
</div>
<a id="tokkwif"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwIf</span>
</span>
</div>
<a id="tokkwelse"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwElse</span>
</span>
</div>
<a id="tokkwwhile"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwWhile</span>
</span>
</div>
<a id="tokkwreturn"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwReturn</span>
</span>
</div>
<a id="tokkwtrue"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwTrue</span>
</span>
</div>
<a id="tokkwfalse"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwFalse</span>
</span>
</div>
<a id="tokkwnull"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwNull</span>
</span>
</div>
<a id="tokkwthis"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwThis</span>
</span>
</div>
<a id="tokkwinlinevm"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwInlineVm</span>
</span>
</div>
<a id="tokkwinlineasm"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokKwInlineAsm</span>
</span>
</div>
<a id="tokopplus"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokOpPlus</span>
</span>
</div>
<a id="tokopminus"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokOpMinus</span>
</span>
</div>
<a id="tokopmultiply"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokOpMultiply</span>
</span>
</div>
<a id="tokopdivide"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokOpDivide</span>
</span>
</div>
<a id="tokopand"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokOpAnd</span>
</span>
</div>
<a id="tokopor"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokOpOr</span>
</span>
</div>
<a id="tokopnot"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokOpNot</span>
</span>
</div>
<a id="tokopgt"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokOpGt</span>
</span>
</div>
<a id="tokoplt"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokOpLt</span>
</span>
</div>
<a id="tokopeq"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokOpEq</span>
</span>
</div>
<a id="toksymlbracket"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokSymLBracket</span>
</span>
</div>
<a id="toksymrbracket"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokSymRBracket</span>
</span>
</div>
<a id="toksymlbrace"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokSymLBrace</span>
</span>
</div>
<a id="toksymrbrace"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokSymRBrace</span>
</span>
</div>
<a id="toksymlpar"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokSymLPar</span>
</span>
</div>
<a id="toksymrpar"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokSymRPar</span>
</span>
</div>
<a id="toksymperiod"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokSymPeriod</span>
</span>
</div>
<a id="toksymcomma"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokSymComma</span>
</span>
</div>
<a id="toksymsemicolon"></a>
<div class="paragraph">
<span class="paragraph"><img src="../images/enum.svg"/><span class="inline-text">TokSymSemicolon</span>
</span>
</div>
<a id="tokerror"></a>
<a id="tokeof"></a>
<a id="toknull"></a>
<a id="tokint"></a>
<a id="tokid"></a>
<a id="tokstring"></a>
<a id="tokkwclass"></a>
<a id="tokkwconstructor"></a>
<a id="tokkwfunction"></a>
<a id="tokkwmethod"></a>
<a id="tokkwfield"></a>
<a id="tokkwstatic"></a>
<a id="tokkwvar"></a>
<a id="tokkwint"></a>
<a id="tokkwchar"></a>
<a id="tokkwbool"></a>
<a id="tokkwvoid"></a>
<a id="tokkwlet"></a>
<a id="tokkwdo"></a>
<a id="tokkwif"></a>
<a id="tokkwelse"></a>
<a id="tokkwwhile"></a>
<a id="tokkwreturn"></a>
<a id="tokkwtrue"></a>
<a id="tokkwfalse"></a>
<a id="tokkwnull"></a>
<a id="tokkwthis"></a>
<a id="tokkwinlinevm"></a>
<a id="tokkwinlineasm"></a>
<a id="tokopplus"></a>
<a id="tokopminus"></a>
<a id="tokopmultiply"></a>
<a id="tokopdivide"></a>
<a id="tokopand"></a>
<a id="tokopor"></a>
<a id="tokopnot"></a>
<a id="tokopgt"></a>
<a id="tokoplt"></a>
<a id="tokopeq"></a>
<a id="toksymlbracket"></a>
<a id="toksymrbracket"></a>
<a id="toksymlbrace"></a>
<a id="toksymrbrace"></a>
<a id="toksymlpar"></a>
<a id="toksymrpar"></a>
<a id="toksymperiod"></a>
<a id="toksymcomma"></a>
<a id="toksymsemicolon"></a>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Token.h#L28" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Token.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#analyzer" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="codecache"></a>
<h2>CodeCache</h2>
<span class="inline-text">std::vector&lt; </span>
<a href="namespaceHack.md#string">String</a>
<span class="inline-text"> &gt;</span>
<span class="bold-text"><b>CodeCache</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Scanner.h#L28" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Scanner.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#analyzer" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="nu"></a>
<h2>Nu</h2>
<a href="classHack_1_1Compiler_1_1NodeUtils.md#nodeutils">NodeUtils</a>
<span class="bold-text"><b>Nu</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L33" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#analyzer" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="pu"></a>
<h2>Pu</h2>
<a href="classHack_1_1Compiler_1_1Analyzer_1_1ParseUtils.md#parseutils">ParseUtils</a>
<span class="bold-text"><b>Pu</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L32" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#analyzer" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="token"></a>
<h2>Token</h2>
<a href="classHack_1_1TokenBase.md#tokenbase">TokenBase</a>
<span class="bold-text"><b>Token</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Token.h#L81" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Token.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#analyzer" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="reserved"></a>
<h2>Reserved</h2>
<span class="inline-text">constexpr </span>
<a href="structHack_1_1Compiler_1_1Analyzer_1_1KeywordTable.md#keywordtable">KeywordTable</a>
<span class="bold-text"><b>Reserved</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Scanner.cpp#L39" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Scanner.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#analyzer" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="isvalidcharacter"></a>
<h2>isValidCharacter</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>isValidCharacter</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const int</span>
<span class="inline-text">ch</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack.md#isletter">isLetter</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack.md#isdecimal">isDecimal</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Scanner.cpp#L66" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Scanner.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#analyzer" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
</div>
</div>
</body>
</html>
