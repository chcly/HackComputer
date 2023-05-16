<a id="scannerbase"></a>
<h1>ScannerBase</h1>
<a id="classhack_1_1scannerbase"></a>
<a href="https://github.com/CharlesCarley/HackComputer#~">~</a>
<a href="index.md#index">HackComputer</a>
<span class="inline-text">/</span>
<a href="namespaceHack.md#hack">Hack</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>ScannerBase</b></span>
<br/>
<br/>
<a id="derived-by"></a>
<h4>Derived By</h4>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classHack_1_1Assembler_1_1Scanner.md#scanner">Hack::Assembler::Scanner</a>
</div>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classHack_1_1Compiler_1_1Analyzer_1_1Scanner.md#scanner">Hack::Compiler::Analyzer::Scanner</a>
</div>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classHack_1_1VirtualMachine_1_1Scanner.md#scanner">Hack::VirtualMachine::Scanner</a>
</div>
<img src="../images/dot/internal-diagram-48.dot.svg"/><br/>
<a id="protected-members"></a>
<h2>Protected Members</h2>
<span class="icon-list-item"><a href="#_file" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_file</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_inttable" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_intTable</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_line" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_line</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_stream" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_stream</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_stringtable" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_stringTable</span>
</a>
</span>
<br/>
<a id="protected-methods"></a>
<h2>Protected Methods</h2>
<span class="icon-list-item"><a href="#extractcode" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">extractCode</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#save" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">save</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#save" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">save</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scanany" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">scanAny</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scanlinecomment" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">scanLineComment</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scanmultilinecomment" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">scanMultiLineComment</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scanwhitespace" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">scanWhiteSpace</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#syntaxerror" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">syntaxError</span>
</a>
</span>
<br/>
<a id="private-methods"></a>
<h2>Private Methods</h2>
<span class="icon-list-item"><a href="#syntaxerrorthrow" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">syntaxErrorThrow</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#~scannerbase" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">~ScannerBase</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#attach" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">attach</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#containsstring" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">containsString</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#integer" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">integer</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#line" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">line</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scan" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">scan</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#string" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">string</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#string" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">string</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L32" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<a id="_file"></a>
<h2>_file</h2>
<a href="namespaceHack.md#string">String</a>
<span class="bold-text"><b>_file</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L37" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_inttable"></a>
<h2>_intTable</h2>
<a href="namespaceHack.md#inttable">IntTable</a>
<span class="bold-text"><b>_intTable</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L36" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_line"></a>
<h2>_line</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>_line</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L38" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_stream"></a>
<h2>_stream</h2>
<a href="namespaceHack.md#istream">IStream</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_stream</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L34" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_stringtable"></a>
<h2>_stringTable</h2>
<a href="namespaceHack.md#stringtable">StringTable</a>
<span class="bold-text"><b>_stringTable</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L35" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="extractcode"></a>
<h2>extractCode</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>extractCode</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceHack.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">dest</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char</span>
<span class="inline-text">seqStart</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char</span>
<span class="inline-text">seqEnd</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L69" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="save"></a>
<h2>save</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>save</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceHack.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">str</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1ScannerBase.md#_stringtable">_stringTable</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1IndexCache.md#insert">insert</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L40" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="save"></a>
<h2>save</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>save</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const int &amp;</span>
<span class="inline-text">val</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1ScannerBase.md#_inttable">_intTable</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1IndexCache.md#insert">insert</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L45" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="scanany"></a>
<h2>scanAny</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>scanAny</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceHack.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">dest</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char</span>
<span class="inline-text">seqStart</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char</span>
<span class="inline-text">seqEnd</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L66" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="scanlinecomment"></a>
<h2>scanLineComment</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>scanLineComment</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1ScannerBase.md#_stream">_stream</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1ScannerBase.md#_line">_line</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L61" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.cpp#L66" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="scanmultilinecomment"></a>
<h2>scanMultiLineComment</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>scanMultiLineComment</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1ScannerBase.md#_stream">_stream</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1ScannerBase.md#_line">_line</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L63" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.cpp#L78" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="scanwhitespace"></a>
<h2>scanWhiteSpace</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>scanWhiteSpace</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L59" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="syntaxerror"></a>
<h2>syntaxError</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>syntaxError</b></span>
<span class="italic-text"><i>(</i></span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L51" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="syntaxerrorthrow"></a>
<h2>syntaxErrorThrow</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>syntaxErrorThrow</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceHack.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">message</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L72" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.cpp#L61" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="scannerbase"></a>
<h2>ScannerBase</h2>
<span class="bold-text"><b>ScannerBase</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L75" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.cpp#L28" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="~scannerbase"></a>
<h2>~ScannerBase</h2>
<span class="bold-text"><b>~ScannerBase</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L77" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="attach"></a>
<h2>attach</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>attach</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceHack.md#istream">IStream</a>
<span class="inline-text"> *</span>
<span class="inline-text">stream</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceHack.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">file</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1ScannerBase.md#_stream">_stream</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1ScannerBase.md#_file">_file</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1ScannerBase.md#_line">_line</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L81" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.cpp#L34" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="containsstring"></a>
<h2>containsString</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>containsString</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">size_t</span>
<span class="inline-text">id</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1ScannerBase.md#_stringtable">_stringTable</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1IndexCache.md#contains">contains</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L91" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.cpp#L56" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="integer"></a>
<h2>integer</h2>
<span class="inline-text">int</span>
<span class="bold-text"><b>integer</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const size_t &amp;</span>
<span class="inline-text">i</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1ScannerBase.md#_inttable">_intTable</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1IndexCache.md#at">at</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L87" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.cpp#L51" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="line"></a>
<h2>line</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>line</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1ScannerBase.md#_line">_line</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L89" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="scan"></a>
<h2>scan</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>scan</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classHack_1_1TokenBase.md#tokenbase">TokenBase</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">tok</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L79" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="string"></a>
<h2>string</h2>
<span class="inline-text">const </span>
<a href="namespaceHack.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="bold-text"><b>string</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const size_t &amp;</span>
<span class="inline-text">i</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1ScannerBase.md#_stringtable">_stringTable</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1IndexCache.md#at">at</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L83" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.cpp#L41" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="string"></a>
<h2>string</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>string</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceHack.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">dest</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const size_t &amp;</span>
<span class="inline-text">i</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1ScannerBase.md#_stringtable">_stringTable</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1IndexCache.md#at">at</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.h#L85" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/ParserBase/ScannerBase.cpp#L46" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
</div>
</div>
</body>
</html>
