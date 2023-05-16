<a id="chip"></a>
<h1>Chip</h1>
<a id="classhack_1_1chips_1_1chip"></a>
<a href="https://github.com/CharlesCarley/HackComputer#~">~</a>
<a href="index.md#index">HackComputer</a>
<span class="inline-text">/</span>
<a href="namespaceHack.md#hack">Hack</a>
<span class="inline-text">::</span>
<a href="namespaceHack_1_1Chips.md#chips">Chips</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>Chip</b></span>
<br/>
<br/>
<a href="classHack_1_1Chips_1_1Chip.md#chip">Chip</a>
<span class="inline-text"> is the base class for all chips defined in this system. </span>
<br/>
<br/>
<span class="inline-text">It uses a template integer for the </span>
<span class="bold-text"><b>_bits</b></span>
<span class="inline-text"> member variable. Most chips should maintain a cache bit (usually the MSB) to control evaluation </span>
<br/>
<br/>
<span class="inline-text">
 Evaluation happens as follows:</span>
<ul>
<li><span class="inline-text">If an input on the chip is modified, mark the cache bit.</span>
</li>
<li><span class="inline-text">Any call to query an output will check this bit.</span>
<ul>
<li><span class="inline-text">If the bit is set call evaluate then return the output.</span>
</li>
<li><span class="inline-text">If it is not set then return the previous output. </span>
</li>
</ul>
</li>
</ul>
<br/>
<a id="protected-members"></a>
<h2>Protected Members</h2>
<span class="icon-list-item"><a href="#_bits" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_bits</span>
</a>
</span>
<br/>
<a id="protected-methods"></a>
<h2>Protected Methods</h2>
<span class="icon-list-item"><a href="#isdirty" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">isDirty</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#chip" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">Chip</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#~chip" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">~Chip</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#applybit" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">applyBit</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#assignbit" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">assignBit</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#clearbit" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">clearBit</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getbit" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getBit</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#setbit" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">setBit</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/Chip.h#L45" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Chip.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#chip" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<a id="_bits"></a>
<h2>_bits</h2>
<span class="inline-text">T</span>
<span class="bold-text"><b>_bits</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/Chip.h#L49" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Chip.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#chip" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/Chip.h#L47" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Chip.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#chip" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="chip"></a>
<h2>Chip</h2>
<span class="bold-text"><b>Chip</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/Chip.h#L52" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Chip.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#chip" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="~chip"></a>
<h2>~Chip</h2>
<span class="bold-text"><b>~Chip</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/Chip.h#L54" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Chip.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#chip" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="applybit"></a>
<h2>applyBit</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>applyBit</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<span class="bold-text"><b>uint8_t</b></span>
<span class="inline-text"> &amp;</span>
<span class="inline-text">index</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const bool</span>
<span class="inline-text">value</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Clears or sets the bit at the supplied index. </span>
<br/>
<br/>
<ul>
<li><span class="italic-text"><i>index</i></span>
<span class="inline-text">: </span>
</li>
<li><span class="italic-text"><i>value</i></span>
<span class="inline-text">: </span>
<span class="inline-text">A value of true will set the bit.</span>
</li>
</ul>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/Chip.h#L81" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Chip.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#chip" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="assignbit"></a>
<h2>assignBit</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>assignBit</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<span class="bold-text"><b>uint8_t</b></span>
<span class="inline-text"> &amp;</span>
<span class="inline-text">index</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Zeros all bits except for the bit at the supplied index. </span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/Chip.h#L69" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Chip.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#chip" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="clearbit"></a>
<h2>clearBit</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>clearBit</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<span class="bold-text"><b>uint8_t</b></span>
<span class="inline-text"> &amp;</span>
<span class="inline-text">index</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Clears the bit at the supplied index. </span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/Chip.h#L74" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Chip.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#chip" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="getbit"></a>
<h2>getBit</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>getBit</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<span class="bold-text"><b>uint8_t</b></span>
<span class="inline-text"> &amp;</span>
<span class="inline-text">index</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Returns the state of the bit at the supplied index. </span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/Chip.h#L59" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Chip.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#chip" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="setbit"></a>
<h2>setBit</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>setBit</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<span class="bold-text"><b>uint8_t</b></span>
<span class="inline-text"> &amp;</span>
<span class="inline-text">index</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Sets the bit at the supplied index. </span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/HackComputer/blob/master/Source/Chips/Chip.h#L64" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Chip.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#chip" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
</div>
</div>
</body>
</html>
