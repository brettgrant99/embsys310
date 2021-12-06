Problem 02

a.   The program is using 432 bytes of ROM.  

b.   It appears to be using 4 bytes of RAM.  Well, and the stack size of 8192 bytes.  

c.   The most ROM seems to be from my functions, main, delay and startup, which take up 134 bytes of code and 64 byts of data for 198 bytes total.  rt7m_tl.a uses 150 bytes.  

d.   Well, the stack reserves the most RAM, but 32 bit counter for the 1 ms interupt is the only ram used.  Not sure how much the stack uses during running.  

3.  Well, I just simply turned on the optimizer and it saved a few bytes by eliminating 2 op codes, but that was hardly worth doing.  
