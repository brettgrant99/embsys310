# Assignment 02
1\.  

    a) Local Value starts out as 2147483647 and changes to -2147483648.
	b)  R1 = 0x8000 0000
	c) N = 1 because the variable is signed so it is now negative.  V = 1 because the addition resulted in an overflow.
	
2\.  
	a) Locals goes from -1 to 0.  
	b) Z = 1 because the value is zero.  C = 1 because the most significant bit was high and was changed to low because of the binary addition.
	
3\.  
	a) The value starts out at 2147483647 and increments by 1 for each counter++ call.  
	b) The first increment sets N = 1 & V = 1.  The remaining increments, N = 1 & V = 0;
	
4\.  
	a) The value starts at 4294967295 and becomes 0.  Then it increments by 1 with each call.  
	b) Z = 1 when it is 0 & C = 1 due to rollover with the first increment.  After that, all ASPR flags are low.

5\.  
	a) It has file scope, but in this case with one file it is esentially global scope.  
	b) No, it is not a local variable.
	c) We can track it in the Watch window after we add the watch.
	d) 0x20000000, which is the start of SRAM.
	
6\.  
	a) It is 4.  
	b) The global variable counter is put at the beginning of the SRAM.  The pointer is pointing to the beginning of the SRAM, so counter and *p_int are at the same memory location.  The same effect could be done if int *p_int = &counter;
	
7\.  
	a) It is stored at 0x20000000.  
	b) It is stored in RAM.  
	c) It is 4.  
	
