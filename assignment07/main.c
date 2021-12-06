#include "stm32l475xx.h"
#include <stdint.h>
#include "delay.h"

int main()
{
  RCC->AHB2ENR |= RCC_AHB2ENR_GPIOAEN;
  GPIOA->MODER &= ~GPIO_MODER_MODE5_1;
  SysTick_Initialize();
  
  uint32_t pause = 500;
  
  while(1) {
    GPIOA->ODR |= GPIO_ODR_OD5;
    delay(pause);
    
    GPIOA->ODR &= ~GPIO_ODR_OD5;
    delay(pause);
  }  
}
