<a id="cpu"></a>
<h1>Cpu</h1>
<a id="classhack_1_1chips_1_1cpu"></a>
<a href="https://github.com/CharlesCarley/HackComputer#~">~</a>
<a href="index.md#index">HackComputer</a>
<span class="inline-text">/</span>
<a href="namespaceHack.md#hack">Hack</a>
<span class="inline-text">::</span>
<a href="namespaceHack_1_1Chips.md#chips">Chips</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>Cpu</b></span>
<br/>
<br/>
<a id="derived-from"></a>
<h4>Derived From</h4>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Chip.md#chip">Hack::Chips::Chip&lt; uint8_t, 8 &gt;</a>
</div>
<img src="../images/dot/internal-diagram-9.dot.svg"/><br/>
<a id="private-members"></a>
<h2>Private Members</h2>
<span class="icon-list-item"><a href="#_a" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_a</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_alu" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_alu</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_d" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_d</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_in" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_in</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_ins" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_ins</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_pc" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_pc</span>
</a>
</span>
<br/>
<a id="private-methods"></a>
<h2>Private Methods</h2>
<span class="icon-list-item"><a href="#evaluate" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">evaluate</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#isdirty" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">isDirty</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#markdirty" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">markDirty</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">Cpu</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#clear" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">clear</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getaddress" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getAddress</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getamregister" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getAmRegister</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getdregister" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getDRegister</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getnext" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getNext</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getout" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getOut</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getwrite" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getWrite</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#lock" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">lock</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#setclock" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">setClock</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#setinmemory" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">setInMemory</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#setinstruction" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">setInstruction</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#setreset" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">setReset</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L31" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<a id="_a"></a>
<h2>_a</h2>
<a href="classHack_1_1Chips_1_1Register.md#register">Register</a>
<span class="bold-text"><b>_a</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L39" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_alu"></a>
<h2>_alu</h2>
<a href="classHack_1_1Chips_1_1Alu.md#alu">Alu</a>
<span class="bold-text"><b>_alu</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L43" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_d"></a>
<h2>_d</h2>
<a href="classHack_1_1Chips_1_1Register.md#register">Register</a>
<span class="bold-text"><b>_d</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L39" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_in"></a>
<h2>_in</h2>
<span class="bold-text"><b>uint16_t</b></span>
<span class="bold-text"><b>_in</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L42" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_ins"></a>
<h2>_ins</h2>
<span class="bold-text"><b>uint16_t</b></span>
<span class="bold-text"><b>_ins</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L41" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_pc"></a>
<h2>_pc</h2>
<a href="classHack_1_1Chips_1_1ProgramCounter.md#programcounter">ProgramCounter</a>
<span class="bold-text"><b>_pc</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L40" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="evaluate"></a>
<h2>evaluate</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>evaluate</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L33" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.cpp#L168" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="isdirty"></a>
<h2>isDirty</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>isDirty</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L35" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.cpp#L158" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="markdirty"></a>
<h2>markDirty</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>markDirty</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L37" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.cpp#L163" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="cpu"></a>
<h2>Cpu</h2>
<span class="bold-text"><b>Cpu</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L46" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.cpp#L53" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
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
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Register.md#setin">setIn</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Register.md#setload">setLoad</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Register.md#setclock">setClock</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1ProgramCounter.md#setin">setIn</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1ProgramCounter.md#setinc">setInc</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1ProgramCounter.md#setload">setLoad</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1ProgramCounter.md#setclock">setClock</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Alu.md#setx">setX</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Alu.md#sety">setY</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Alu.md#setflags">setFlags</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Chip.md#_bits">_bits</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Timer.md#reset">reset</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L70" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.cpp#L304" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="getaddress"></a>
<h2>getAddress</h2>
<span class="bold-text"><b>uint16_t</b></span>
<span class="bold-text"><b>getAddress</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Chips.md#cpudirty">CpuDirty</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Chip.md#_bits">_bits</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Register.md#getout">getOut</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L60" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.cpp#L130" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="getamregister"></a>
<h2>getAmRegister</h2>
<span class="bold-text"><b>uint16_t</b></span>
<span class="bold-text"><b>getAmRegister</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Chips.md#cpudirty">CpuDirty</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Chip.md#_bits">_bits</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Register.md#getout">getOut</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L66" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.cpp#L144" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="getdregister"></a>
<h2>getDRegister</h2>
<span class="bold-text"><b>uint16_t</b></span>
<span class="bold-text"><b>getDRegister</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Chips.md#cpudirty">CpuDirty</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Chip.md#_bits">_bits</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Register.md#getout">getOut</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L64" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.cpp#L137" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="getnext"></a>
<h2>getNext</h2>
<span class="bold-text"><b>uint16_t</b></span>
<span class="bold-text"><b>getNext</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Chips.md#cpudirty">CpuDirty</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Chip.md#_bits">_bits</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1ProgramCounter.md#getout">getOut</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L62" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.cpp#L151" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="getout"></a>
<h2>getOut</h2>
<span class="bold-text"><b>uint16_t</b></span>
<span class="bold-text"><b>getOut</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Chips.md#cpudirty">CpuDirty</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Chip.md#_bits">_bits</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Alu.md#getout">getOut</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L58" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.cpp#L123" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="getwrite"></a>
<h2>getWrite</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>getWrite</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Chips.md#cpudirty">CpuDirty</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Chip.md#_bits">_bits</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Chips.md#bit6">Bit6</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L56" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.cpp#L116" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="lock"></a>
<h2>lock</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>lock</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">bool</span>
<span class="inline-text">state</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Chip.md#_bits">_bits</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Chips.md#bit2">Bit2</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Register.md#lock">lock</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1ProgramCounter.md#lock">lock</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L68" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.cpp#L61" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="setclock"></a>
<h2>setClock</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>setClock</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">bool</span>
<span class="inline-text">clock</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Chip.md#_bits">_bits</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Chips.md#bit1">Bit1</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Chips.md#bit7">Bit7</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L50" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.cpp#L82" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="setinmemory"></a>
<h2>setInMemory</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>setInMemory</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<span class="bold-text"><b>uint16_t</b></span>
<span class="inline-text"> &amp;</span>
<span class="inline-text">input</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Chip.md#_bits">_bits</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Chips.md#bit7">Bit7</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L48" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.cpp#L73" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="setinstruction"></a>
<h2>setInstruction</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>setInstruction</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<span class="bold-text"><b>uint16_t</b></span>
<span class="inline-text"> &amp;</span>
<span class="inline-text">instruction</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Chip.md#_bits">_bits</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Chips.md#bit7">Bit7</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L54" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.cpp#L110" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="setreset"></a>
<h2>setReset</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>setReset</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">bool</span>
<span class="inline-text">reset</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classHack_1_1Chips_1_1Chip.md#_bits">_bits</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Chips.md#bit0">Bit0</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceHack_1_1Chips.md#bit7">Bit7</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.h#L52" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/CPU.cpp#L97" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">CPU.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cpu" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
</div>
</div>
</body>
</html>
