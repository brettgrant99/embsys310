#include "stm32l475xx.h"

void wait() {
  volatile int counter = 0;
  int pauseTime = 100000;
  counter = 0;
  while(counter < pauseTime) {
    counter++;
  }
}
int main()
{
  RCC->AHB2ENR |= RCC_AHB2ENR_GPIOAEN;
  GPIOA->MODER &= ~GPIO_MODER_MODE5_1;
    
  while(1) {
    GPIOA->ODR |= GPIO_ODR_OD5;
    wait();
    
    GPIOA->ODR &= ~GPIO_ODR_OD5;
    wait();
  }
  
  return 0;
}
