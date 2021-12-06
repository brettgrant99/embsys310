#include <stdint.h>
#include "stm32l475xx.h"
#include "delay.h"

#define ONE_MS 4000



void SysTick_Initialize(void) {
  SysTick->LOAD = ONE_MS - 1;
  SysTick->CTRL = (SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_TICKINT_Msk | SysTick_CTRL_ENABLE_Msk);
}

void SysTick_Handler(void) {
  extern uint32_t countDown;
  
  --countDown;
}

void delay(uint32_t in_ms) {
  countDown = in_ms;
  SysTick->VAL = 0;  // clear the counter
  while(countDown != 0) {    
  }
}