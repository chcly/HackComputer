<a id="parser"></a>
<h1>Parser</h1>
<a id="classhack_1_1compiler_1_1analyzer_1_1parser"></a>
<a href="https://github.com/CharlesCarley/HackComputer#~">~</a>
<a href="index.md#index">HackComputer</a>
<span class="inline-text">/</span>
<a href="namespaceHack.md#hack">Hack</a>
<span class="inline-text">::</span>
<a href="namespaceHack_1_1Compiler.md#compiler">Compiler</a>
<span class="inline-text">::</span>
<a href="namespaceHack_1_1Compiler_1_1Analyzer.md#analyzer">Analyzer</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>Parser</b></span>
<br/>
<br/>
<a id="derived-from"></a>
<h4>Derived From</h4>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classHack_1_1ParserBase.md#parserbase">Hack::ParserBase</a>
</div>
<img src="../images/dot/internal-diagram-40.dot.svg"/><br/>
<a id="public-typedefs"></a>
<h2>Public Typedefs</h2>
<span class="icon-list-item"><a href="#nodestack" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">NodeStack</span>
</a>
</span>
<br/>
<a id="private-members"></a>
<h2>Private Members</h2>
<span class="icon-list-item"><a href="#_stack" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_stack</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_tree" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_tree</span>
</a>
</span>
<br/>
<a id="private-methods"></a>
<h2>Private Methods</h2>
<span class="icon-list-item"><a href="#bodyrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">bodyRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#callmethodrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">callMethodRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#checkeof" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">checkEof</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#classdescriptionrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">classDescriptionRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#classrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">classRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#complextermrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">complexTermRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#constant" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">constant</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#createrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">createRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#datatyperule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">dataTypeRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#dostatementrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">doStatementRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#elsestatementrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">elseStatementRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#expressionlistrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">expressionListRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#expressionrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">expressionRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#fieldrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">fieldRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#fieldspecificationrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">fieldSpecificationRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#identifier" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">identifier</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#identifier" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">identifier</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#identifierlistrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">identifierListRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#ifstatementrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">ifStatementRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#inlineasmrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">inlineAsmRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#inlinevmrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">inlineVmRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#keyword" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">keyword</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#keyword" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">keyword</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#letstatementrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">letStatementRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#methodbodyrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">methodBodyRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#methodreturntyperule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">methodReturnTypeRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#methodrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">methodRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#methodspecificationrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">methodSpecificationRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#object" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">object</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#operatorrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">operatorRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parameterlistrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">parameterListRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parameterrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">parameterRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parseimpl" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">parseImpl</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#reducerule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">reduceRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#returnstatementrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">returnStatementRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#simpletermrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">simpleTermRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#singleexpressionrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">singleExpressionRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#statementlistrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">statementListRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#statementrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">statementRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symbol" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">symbol</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#symbol" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">symbol</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#termrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">termRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#unaryoperatorrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">unaryOperatorRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#variablerule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">variableRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#whilestatementrule" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">whileStatementRule</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#writeimpl" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">writeImpl</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">Parser</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#~parser" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">~Parser</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#gettree" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getTree</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L34" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<a id="nodestack"></a>
<h2>NodeStack</h2>
<span class="inline-text">std::stack&lt; </span>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> * &gt;</span>
<span class="bold-text"><b>NodeStack</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L36" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_stack"></a>
<h2>_stack</h2>
<a href="classHack_1_1Compiler_1_1Analyzer_1_1Parser.md#nodestack">NodeStack</a>
<span class="bold-text"><b>_stack</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L40" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_tree"></a>
<h2>_tree</h2>
<a href="classHack_1_1Compiler_1_1Tree.md#tree">Tree</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_tree</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L39" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="bodyrule"></a>
<h2>bodyRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>bodyRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L89" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L617" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="callmethodrule"></a>
<h2>callMethodRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>callMethodRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L125" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L1108" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="checkeof"></a>
<h2>checkEof</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>checkEof</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L51" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L83" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="classdescriptionrule"></a>
<h2>classDescriptionRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>classDescriptionRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L55" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L385" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="classrule"></a>
<h2>classRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>classRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L53" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L360" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="complextermrule"></a>
<h2>complexTermRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>complexTermRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L117" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L968" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="constant"></a>
<h2>constant</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>constant</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int8_t</span>
<span class="inline-text">symbolId</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L61" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L144" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="createrule"></a>
<h2>createRule</h2>
<a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>createRule</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const int8_t &amp;</span>
<span class="inline-text">name</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L49" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L75" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="datatyperule"></a>
<h2>dataTypeRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>dataTypeRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L79" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L452" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="dostatementrule"></a>
<h2>doStatementRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>doStatementRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L103" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L809" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="elsestatementrule"></a>
<h2>elseStatementRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>elseStatementRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L99" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L776" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="expressionlistrule"></a>
<h2>expressionListRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>expressionListRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L123" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L1082" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="expressionrule"></a>
<h2>expressionRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>expressionRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L109" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L857" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="fieldrule"></a>
<h2>fieldRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>fieldRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L75" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L477" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="fieldspecificationrule"></a>
<h2>fieldSpecificationRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>fieldSpecificationRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L77" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L433" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="identifier"></a>
<h2>identifier</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>identifier</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">rule</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L57" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L89" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="identifier"></a>
<h2>identifier</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>identifier</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">rule</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int8_t</span>
<span class="inline-text">symbolId</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int</span>
<span class="inline-text">token</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L59" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L108" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="identifierlistrule"></a>
<h2>identifierListRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>identifierListRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L73" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L410" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="ifstatementrule"></a>
<h2>ifStatementRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>ifStatementRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L97" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L752" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="inlineasmrule"></a>
<h2>inlineAsmRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>inlineAsmRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L133" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L600" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="inlinevmrule"></a>
<h2>inlineVmRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>inlineVmRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L131" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L583" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="keyword"></a>
<h2>keyword</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>keyword</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">rule</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int8_t</span>
<span class="inline-text">symbolId</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int</span>
<span class="inline-text">token</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const char *</span>
<span class="inline-text">kw</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L69" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L281" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="keyword"></a>
<h2>keyword</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>keyword</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int8_t</span>
<span class="inline-text">symbolId</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L71" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L299" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="letstatementrule"></a>
<h2>letStatementRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>letStatementRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L95" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L712" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="methodbodyrule"></a>
<h2>methodBodyRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>methodBodyRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L87" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L567" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="methodreturntyperule"></a>
<h2>methodReturnTypeRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>methodReturnTypeRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L85" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L554" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="methodrule"></a>
<h2>methodRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>methodRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L81" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L500" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="methodspecificationrule"></a>
<h2>methodSpecificationRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>methodSpecificationRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L83" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L530" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="object"></a>
<h2>object</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>object</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int8_t</span>
<span class="inline-text">symbolId</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L63" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L177" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="operatorrule"></a>
<h2>operatorRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>operatorRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L119" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L1022" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="parameterlistrule"></a>
<h2>parameterListRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>parameterListRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L127" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L1165" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="parameterrule"></a>
<h2>parameterRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>parameterRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L129" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L1187" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="parseimpl"></a>
<h2>parseImpl</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>parseImpl</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceHack.md#istream">IStream</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">is</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L43" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L1197" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="reducerule"></a>
<h2>reduceRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>reduceRule</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">node</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L47" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L50" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="returnstatementrule"></a>
<h2>returnStatementRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>returnStatementRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L105" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L821" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="simpletermrule"></a>
<h2>simpleTermRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>simpleTermRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L115" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L934" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="singleexpressionrule"></a>
<h2>singleExpressionRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>singleExpressionRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L111" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L871" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="statementlistrule"></a>
<h2>statementListRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>statementListRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L107" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L836" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="statementrule"></a>
<h2>statementRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>statementRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L93" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L670" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="symbol"></a>
<h2>symbol</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>symbol</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classHack_1_1Compiler_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">rule</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int8_t</span>
<span class="inline-text">symbolId</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int</span>
<span class="inline-text">token</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char</span>
<span class="inline-text">ch</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L65" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L195" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="symbol"></a>
<h2>symbol</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>symbol</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int8_t</span>
<span class="inline-text">symbolId</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L67" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L213" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="termrule"></a>
<h2>termRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>termRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L113" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L913" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="unaryoperatorrule"></a>
<h2>unaryOperatorRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>unaryOperatorRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L121" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L1062" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="variablerule"></a>
<h2>variableRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>variableRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L91" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L655" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="whilestatementrule"></a>
<h2>whileStatementRule</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>whileStatementRule</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L101" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L790" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="writeimpl"></a>
<h2>writeImpl</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>writeImpl</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceHack.md#ostream">OStream</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">os</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int</span>
<span class="inline-text">format</span>
<span class="inline-text"> = </span>
<span class="inline-text">0</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L45" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L1223" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="parser"></a>
<h2>Parser</h2>
<span class="bold-text"><b>Parser</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1ParserBase.md#_scanner">_scanner</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L136" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L35" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="~parser"></a>
<h2>~Parser</h2>
<span class="bold-text"><b>~Parser</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1ParserBase.md#_scanner">_scanner</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L138" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.cpp#L41" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="gettree"></a>
<h2>getTree</h2>
<span class="inline-text">const </span>
<a href="classHack_1_1Compiler_1_1Tree.md#tree">Tree</a>
<span class="inline-text"> &amp;</span>
<span class="bold-text"><b>getTree</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Compiler/Analyzer/Parser.h#L140" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
</div>
</div>
</body>
</html>
