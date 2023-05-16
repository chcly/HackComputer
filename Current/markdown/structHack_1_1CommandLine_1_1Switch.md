<a id="switch"></a>
<h1>Switch</h1>
<a id="structhack_1_1commandline_1_1switch"></a>
<a href="https://github.com/CharlesCarley/HackComputer#~">~</a>
<a href="index.md#index">HackComputer</a>
<span class="inline-text">/</span>
<a href="namespaceHack.md#hack">Hack</a>
<span class="inline-text">::</span>
<a href="namespaceHack_1_1CommandLine.md#commandline">CommandLine</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>Switch</b></span>
<br/>
<br/>
<span class="inline-text">Represents a command line switch </span>
<br/>
<a id="public-members"></a>
<h2>Public Members</h2>
<span class="icon-list-item"><a href="#argcount" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">argCount</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#description" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">description</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#id" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">id</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#longswitch" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">longSwitch</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#optional" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">optional</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#shortswitch" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">shortSwitch</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/CommandLine/Option.h#L34" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Option.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#switch" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<a id="argcount"></a>
<h2>argCount</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>argCount</b></span>
<br/>
<span class="inline-text">Defines the number of required arguments. </span>
<br/>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/CommandLine/Option.h#L54" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Option.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#switch" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="description"></a>
<h2>description</h2>
<span class="inline-text">const char *</span>
<span class="bold-text"><b>description</b></span>
<br/>
<span class="inline-text">A brief description for the -h, </span>
<span class="inline-text">help builtin option. </span>
<br/>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/CommandLine/Option.h#L48" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Option.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#switch" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="id"></a>
<h2>id</h2>
<span class="inline-text">uint32_t</span>
<span class="bold-text"><b>id</b></span>
<br/>
<span class="inline-text">This needs to be it&apos;s index in the context of all defined switches </span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/CommandLine/Option.h#L37" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Option.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#switch" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="longswitch"></a>
<h2>longSwitch</h2>
<span class="inline-text">const char *</span>
<span class="bold-text"><b>longSwitch</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/CommandLine/Option.h#L45" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Option.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#switch" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="optional"></a>
<h2>optional</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>optional</b></span>
<br/>
<span class="inline-text">Means it&apos;s an optional switch. </span>
<br/>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/CommandLine/Option.h#L51" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Option.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#switch" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="shortswitch"></a>
<h2>shortSwitch</h2>
<span class="inline-text">char</span>
<span class="bold-text"><b>shortSwitch</b></span>
<br/>
<span class="inline-text">Short switch (-[a-zA-Z]+) A value of 0 means unused </span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Utils/CommandLine/Option.h#L41" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Option.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#switch" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
</div>
</div>
</body>
</html>
