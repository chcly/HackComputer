// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/06/add/Add.asm
// modified to use R# address replacements
// Computes R0 = 2 + 3  (R0 refers to RAM[0])
(TOP)
@R2		// 0000000000000010
D=A		// 1110110000010000
@R3		// 0000000000000011
D=D+A   // 1110000010010000
@R0     // 0000000000000000
M=D		// 1110001100001000
@TOP
A;JMP
