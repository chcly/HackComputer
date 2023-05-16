<a id="generator"></a>
<h1>Generator</h1>
<a id="classhack_1_1compiler_1_1codegenerator_1_1generator"></a>
<a href="https://github.com/CharlesCarley/HackComputer#~">~</a>
<a href="index.md#index">HackComputer</a>
<span class="inline-text">/</span>
<a href="namespaceHack.md#hack">Hack</a>
<span class="inline-text">::</span>
<a href="namespaceHack_1_1Compiler.md#compiler">Compiler</a>
<span class="inline-text">::</span>
<a href="namespaceHack_1_1Compiler_1_1CodeGenerator.md#codegenerator">CodeGenerator</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>Generator</b></span>
<br/>
<br/>
<a id="private-members"></a>
<h2>Private Members</h2>
<span class="icon-list-item"><a href="#_countbuffer" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_countBuffer</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_elseend" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_elseEnd</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_emitter" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_emitter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_filename" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_fileName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_globals" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_globals</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_hasreturn" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_hasReturn</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_locals" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_locals</span>
</a>
</span>
<br/>
<a id="private-methods"></a>
<h2>Private Methods</h2>
<span class="icon-list-item"><a href="#buildcallmethod" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildCallMethod</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildclass" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildClass</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildclassdescription" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildClassDescription</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildcomplexterm" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildComplexTerm</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildconstant" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildConstant</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#builddostatement" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildDoStatement</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildelsestatement" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildElseStatement</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildexpression" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildExpression</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildexpressionlist" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildExpressionList</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildglobals" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildGlobals</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildifstatement" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildIfStatement</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildletstatement" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildLetStatement</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildlocals" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildLocals</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildoperation" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildOperation</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildreturnstatement" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildReturnStatement</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildsimpleterm" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildSimpleTerm</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildsingleexpression" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildSingleExpression</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildstatements" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildStatements</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildterm" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildTerm</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildunaryoperation" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildUnaryOperation</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#buildwhilestatement" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">buildWhileStatement</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#compileerror" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">compileError</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#lookup" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">lookup</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parseimpl" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">parseImpl</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#popsymbol" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">popSymbol</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#pushidentifier" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">pushIdentifier</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">Generator</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#~generator" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">~Generator</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#compiletovm" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">compileToVm</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#write" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">write</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#write" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">write</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L52" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<a id="_countbuffer"></a>
<h2>_countBuffer</h2>
<a href="namespaceHack.md#outputstringstream">OutputStringStream</a>
<span class="bold-text"><b>_countBuffer</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L54" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_elseend"></a>
<h2>_elseEnd</h2>
<a href="namespaceHack.md#string">String</a>
<span class="bold-text"><b>_elseEnd</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L61" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_emitter"></a>
<h2>_emitter</h2>
<a href="classHack_1_1Compiler_1_1CodeGenerator_1_1VmEmitter.md#vmemitter">VmEmitter</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_emitter</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L58" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_filename"></a>
<h2>_fileName</h2>
<a href="namespaceHack.md#string">String</a>
<span class="bold-text"><b>_fileName</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L59" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_globals"></a>
<h2>_globals</h2>
<a href="classHack_1_1Compiler_1_1CodeGenerator_1_1SymbolTable.md#symboltable">SymbolTable</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_globals</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L56" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_hasreturn"></a>
<h2>_hasReturn</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>_hasReturn</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L60" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_locals"></a>
<h2>_locals</h2>
<a href="classHack_1_1Compiler_1_1CodeGenerator_1_1SymbolTable.md#symboltable">SymbolTable</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_locals</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L57" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildcallmethod"></a>
<h2>buildCallMethod</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildCallMethod</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">callMethod</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>

```
CallMethod ::= Identifier '(' ExpressionList ')'
               | Identifier '.' Identifier '(' ExpressionList ')'
```
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>callMethod</i></span>
<span class="inline-text">: </span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L99" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L371" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildclass"></a>
<h2>buildClass</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildClass</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">node</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>

```
Class ::= Class Identifier '{' ClassDescription '}'
```
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>node</i></span>
<span class="inline-text">: </span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L67" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L675" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildclassdescription"></a>
<h2>buildClassDescription</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildClassDescription</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">classDescription</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>

```
ClassDescription  ::= ClassDescription Field ';'
                      | ClassDescription Method
                      |
```
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>classDescription</i></span>
<span class="inline-text">: </span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L71" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L609" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildcomplexterm"></a>
<h2>buildComplexTerm</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildComplexTerm</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">complexTerm</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>

```
ComplexTerm ::= Identifier '[' Expression ']'
              | CallMethod
              | '(' Expression  ')'
```
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>complexTerm</i></span>
<span class="inline-text">: </span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L85" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L177" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildconstant"></a>
<h2>buildConstant</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildConstant</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">simpleTerm</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L77" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L74" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="builddostatement"></a>
<h2>buildDoStatement</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildDoStatement</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">statement</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>

```
DoStatement ::= Do CallMethod ';'
```
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>statement</i></span>
<span class="inline-text">: </span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L101" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L409" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildelsestatement"></a>
<h2>buildElseStatement</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildElseStatement</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">statement</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>

```
IfStatement ::= If '(' Expression ')' '{' StatementList '}'
                | Else '{'  StatementList  '}'
```
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>statement</i></span>
<span class="inline-text">: </span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L105" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L422" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildexpression"></a>
<h2>buildExpression</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildExpression</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">expression</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>

```
Expression ::= ExpressionSingleExpression
               | SingleExpression
```
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>expression</i></span>
<span class="inline-text">: </span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L91" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L336" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildexpressionlist"></a>
<h2>buildExpressionList</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildExpressionList</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">expressionList</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>

```
ExpressionList ::= ExpressionList ','  Expression
                   | Expression
                   | !&ndash;empty&ndash;
```
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>expressionList</i></span>
<span class="inline-text">: </span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L97" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L353" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildglobals"></a>
<h2>buildGlobals</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildGlobals</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">classDescription</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L69" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L645" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildifstatement"></a>
<h2>buildIfStatement</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildIfStatement</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">statement</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>

```
IfStatement ::= If '(' Expression ')' '{' StatementList '}'
                | Else '{'  StatementList  '}'
```
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>statement</i></span>
<span class="inline-text">: </span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L103" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L439" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildletstatement"></a>
<h2>buildLetStatement</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildLetStatement</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">statement</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>

```
LetStatement ::= Let Identifier '=' Expression ';'
               | Let Identifier '['  Expression  ']' '='  Expression  ';'
```
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>statement</i></span>
<span class="inline-text">: </span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L93" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L227" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildlocals"></a>
<h2>buildLocals</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildLocals</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">bodyNode</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">parameters</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L73" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L570" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildoperation"></a>
<h2>buildOperation</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildOperation</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">op</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L81" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L114" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildreturnstatement"></a>
<h2>buildReturnStatement</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildReturnStatement</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">statement</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">ReturnStatement ::= Return &apos;;&apos; | Return Expression &apos;;&apos; </span>
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>statement</i></span>
<span class="inline-text">: </span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L95" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L271" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildsimpleterm"></a>
<h2>buildSimpleTerm</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildSimpleTerm</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">simpleTerm</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>

```
<SimpleTerm> ::= Integer
               | String
               | True
               | False
               | Null
               | This
               | Identifier
```
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>simpleTerm</i></span>
<span class="inline-text">: </span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L83" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L156" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildsingleexpression"></a>
<h2>buildSingleExpression</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildSingleExpression</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">expression</span>
<span class="inline-text"> = </span>
<span class="inline-text">singleExpression</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>

```
SingleExpression ::= Term
                      | Operator Term
                      | UnaryOperator Term
```
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>singleExpression</i></span>
<span class="inline-text">: </span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L89" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L295" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildstatements"></a>
<h2>buildStatements</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildStatements</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">methodBody</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>

```
StatementList ::= StatementList Statement
                  | Statement
                  |
```
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>methodBody</i></span>
<span class="inline-text">: </span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L109" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L492" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildterm"></a>
<h2>buildTerm</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildTerm</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">term</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>

```
Term ::= SimpleTerm | ComplexTerm
```
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>term</i></span>
<span class="inline-text">: </span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L87" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L199" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildunaryoperation"></a>
<h2>buildUnaryOperation</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildUnaryOperation</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">unary</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L79" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L99" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="buildwhilestatement"></a>
<h2>buildWhileStatement</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>buildWhileStatement</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">statement</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>

```
WhileStatement ::= While '(' Expression ')' '{' StatementList '}'
```
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>statement</i></span>
<span class="inline-text">: </span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L107" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L466" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="compileerror"></a>
<h2>compileError</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>compileError</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">node</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceHack.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">what</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">Args &amp;&amp;...</span>
<span class="inline-text">args</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L114" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="lookup"></a>
<h2>lookup</h2>
<a href="classHack_1_1Compiler_1_1CodeGenerator_1_1Symbol.md#symbol">Symbol</a>
<span class="bold-text"><b>lookup</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceHack.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">name</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L63" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L540" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="parseimpl"></a>
<h2>parseImpl</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>parseImpl</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">root</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L111" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L682" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="popsymbol"></a>
<h2>popSymbol</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>popSymbol</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1CodeGenerator_1_1Symbol.md#symbol">Symbol</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">symbol</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L65" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L549" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="pushidentifier"></a>
<h2>pushIdentifier</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>pushIdentifier</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">constantIdentifier</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L75" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L48" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="generator"></a>
<h2>Generator</h2>
<span class="bold-text"><b>Generator</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L125" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L33" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="~generator"></a>
<h2>~Generator</h2>
<span class="bold-text"><b>~Generator</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L126" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L41" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="compiletovm"></a>
<h2>compileToVm</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>compileToVm</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">tree</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Compiler_1_1Node.md#filename">filename</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L132" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L702" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="write"></a>
<h2>write</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>write</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceHack.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">file</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L128" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L711" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="write"></a>
<h2>write</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>write</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceHack.md#ostream">OStream</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">stream</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Compiler_1_1CodeGenerator_1_1VmEmitter.md#stream">stream</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.h#L130" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/Generator.cpp#L727" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generator" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
</div>
</div>
</body>
</html>
