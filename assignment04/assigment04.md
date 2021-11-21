# Assignment 04

1\.  
	a) The compiler creates the following commands, MOVS, LDR, STR.  MOVS puts the value that we want, a 1, in R0.  
LDR loads the bitband address constant from flash into R1, and STR, stores the value in R0 to the to the Register stored in R1.
	b) For the non-bitband code, the compiler creates teh following commands, LDR, LDR, ORRS, & STR.  The first LDR, buts the RCC_HAB2ENR value into R0, the next one sets up R1 so that the constant 1, can be placed into it, and then finally, the STR command stores the value of R1 in the register stored in R0.
	
