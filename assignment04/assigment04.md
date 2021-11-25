# Assignment 04

1\.  
&nbsp;&nbsp;a) The compiler creates the following commands, MOVS, LDR, STR.  MOVS puts the value that we want, a 1, in R0.  
LDR loads the bitband address constant from flash into R1, and STR, stores the value in R0 to the to the Register stored in R1.  
&nbsp;&nbsp;b) For the non-bitband code, the compiler creates the following commands, LDR, LDR, ORRS, & STR.  The first LDR, buts the RCC_HAB2ENR value into R0, the next one sets up R1 so that the constant 1, can be placed into it. The ORRS modifies the data, and then finally, the STR command stores the newly modified value of R1 in the register stored in R0.

2\.  
	&nbsp;&nbsp;a) The calling function uses a combination of registers and the stack to pass all 5 parameters.  
	&nbsp;&nbsp;b) It pushes the 5 parameter to the stack, and moves R6-R9 to R0-R3  
	&nbsp;&nbsp;c) It pushes R4 & R5 onto the stack, then reads the third byte on the stack and puts that value in R5.  
	&nbsp;&nbsp;d) It seems like a there is a lot of movement of values between registers and that that the optimizer, if it were on, would probably changes the instructions to be a little more efficient (hopefully!).  
	
