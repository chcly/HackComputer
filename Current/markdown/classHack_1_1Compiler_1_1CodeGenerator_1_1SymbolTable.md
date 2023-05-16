<a id="symboltable"></a>
<h1>SymbolTable</h1>
<a id="classhack_1_1compiler_1_1codegenerator_1_1symboltable"></a>
<a href="https://github.com/CharlesCarley/HackComputer#~">~</a>
<a href="index.md#index">HackComputer</a>
<span class="inline-text">/</span>
<a href="namespaceHack.md#hack">Hack</a>
<span class="inline-text">::</span>
<a href="namespaceHack_1_1Compiler.md#compiler">Compiler</a>
<span class="inline-text">::</span>
<a href="namespaceHack_1_1Compiler_1_1CodeGenerator.md#codegenerator">CodeGenerator</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>SymbolTable</b></span>
<br/>
<br/>
<a id="public-typedefs"></a>
<h2>Public Typedefs</h2>
<span class="icon-list-item"><a href="#iterator" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">Iterator</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symbols" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">Symbols</span>
</a>
</span>
<br/>
<a id="private-members"></a>
<h2>Private Members</h2>
<span class="icon-list-item"><a href="#_argument" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_argument</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_field" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_field</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_local" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_local</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_static" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_static</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_symbols" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_symbols</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#~symboltable" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">~SymbolTable</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#argumentcount" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">argumentCount</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#begin" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">begin</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#clear" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">clear</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#contains" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">contains</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#end" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">end</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#fieldcount" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">fieldCount</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#get" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">get</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#get" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">get</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#insert" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">insert</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#localcount" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">localCount</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#staticcount" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">staticCount</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L29" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<a id="iterator"></a>
<h2>Iterator</h2>
<span class="inline-text">Symbols::Array::const_iterator</span>
<span class="bold-text"><b>Iterator</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L32" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="symbols"></a>
<h2>Symbols</h2>
<a href="classHack_1_1KeyIndexCache.md#keyindexcache">KeyIndexCache</a>
<span class="inline-text">&lt; </span>
<a href="namespaceHack.md#string">String</a>
<span class="inline-text">, </span>
<a href="classHack_1_1Compiler_1_1CodeGenerator_1_1Symbol.md#symbol">Symbol</a>
<span class="inline-text"> &gt;</span>
<span class="bold-text"><b>Symbols</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L31" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_argument"></a>
<h2>_argument</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>_argument</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L39" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_field"></a>
<h2>_field</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>_field</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L36" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_local"></a>
<h2>_local</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>_local</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L38" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_static"></a>
<h2>_static</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>_static</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L37" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_symbols"></a>
<h2>_symbols</h2>
<a href="classHack_1_1Compiler_1_1CodeGenerator_1_1SymbolTable.md#symbols">Symbols</a>
<span class="bold-text"><b>_symbols</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L35" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="symboltable"></a>
<h2>SymbolTable</h2>
<span class="bold-text"><b>SymbolTable</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L42" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.cpp#L26" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="~symboltable"></a>
<h2>~SymbolTable</h2>
<span class="bold-text"><b>~SymbolTable</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L43" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="argumentcount"></a>
<h2>argumentCount</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>argumentCount</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L59" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="begin"></a>
<h2>begin</h2>
<a href="classHack_1_1Compiler_1_1CodeGenerator_1_1SymbolTable.md#iterator">Iterator</a>
<span class="bold-text"><b>begin</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1KeyIndexCache.md#begin">begin</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L64" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="clear"></a>
<h2>clear</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>clear</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1KeyIndexCache.md#clear">clear</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L62" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.cpp#L82" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="contains"></a>
<h2>contains</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>contains</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceHack.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">name</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1KeyIndexCache.md#contains">contains</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L47" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.cpp#L60" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="end"></a>
<h2>end</h2>
<a href="classHack_1_1Compiler_1_1CodeGenerator_1_1SymbolTable.md#iterator">Iterator</a>
<span class="bold-text"><b>end</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1KeyIndexCache.md#end">end</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L66" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="fieldcount"></a>
<h2>fieldCount</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>fieldCount</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L53" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="get"></a>
<h2>get</h2>
<span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1CodeGenerator_1_1Symbol.md#symbol">Symbol</a>
<span class="inline-text"> &amp;</span>
<span class="bold-text"><b>get</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceHack.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">name</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1KeyIndexCache.md#find">find</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1KeyIndexCache.md#at">at</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L49" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.cpp#L65" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="get"></a>
<h2>get</h2>
<span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1CodeGenerator_1_1Symbol.md#symbol">Symbol</a>
<span class="inline-text"> &amp;</span>
<span class="bold-text"><b>get</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const size_t &amp;</span>
<span class="inline-text">idx</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1KeyIndexCache.md#contains">contains</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1KeyIndexCache.md#at">at</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L51" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.cpp#L74" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="insert"></a>
<h2>insert</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>insert</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceHack.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">name</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int8_t</span>
<span class="inline-text">type</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int8_t</span>
<span class="inline-text">kind</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1KeyIndexCache.md#contains">contains</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Compiler_1_1CodeGenerator.md#local">Local</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1KeyIndexCache.md#insert">insert</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Compiler_1_1CodeGenerator.md#argument">Argument</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Compiler_1_1CodeGenerator.md#static">Static</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Compiler_1_1CodeGenerator.md#field">Field</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L45" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.cpp#L36" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="localcount"></a>
<h2>localCount</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>localCount</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L57" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="staticcount"></a>
<h2>staticCount</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>staticCount</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Generator/SymbolTable.h#L55" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">SymbolTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symboltable" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
</div>
</div>
</body>
</html>
