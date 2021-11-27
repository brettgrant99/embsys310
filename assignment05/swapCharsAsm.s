    PUBLIC swapCharsAsm                    // make viewable to outside code

    SECTION .text:CODE:REORDER:NOROOT(2)   // who know's?  ARM does.  I didn't bother to look this up
    THUMB                                  // Tell it that it is THUMB instruction set

swapCharsAsm                               // Function Name
  PUSH {R4}     // Save Callee R4 value to stack
  MOV R2, R1    // Move input param #2 to R2
  MOV R1, R0    // Move input param #1 to R1
  LDRB R3, [R2] // Read R1 and save to R3
  LDRB R4, [R1] // Read R0 and save to R4
  STRB R4, [R2] // Store the value of R4 to R1
  STRB R3, [R1] // Store the value of R3 to R0    
  CMP   R3, R4  // compare R3 to R4
  ITE EQ        // If - Then comparison block
  MOVEQ R0, #0  // if true put 0 in R0
  MOVNE R0, #1  // else put 1 in R0    
  POP {R4}      // Restore R4 from stack before returning
  BX LR         // return to calling function (main)
  END           // End of code
