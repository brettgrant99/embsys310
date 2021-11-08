#define RCC_BASE     0x40021000
#define RCC_AHB2ENR  (*((unsigned int*) (RCC_BASE + 0x4C)))
#define GPIOA_BASE   0x48000000
#define GPIOA_MODER  (*((unsigned int*) (GPIOA_BASE + 0x00)))
#define GPIOA_ODR    (*((unsigned int*) (GPIOA_BASE + 0x14)))
#define ODR05        (1<<5)

#define BASE_DELAY   100000
int counter = 0;

void wait(int delay) {  
  counter = 0;
  while(counter < delay) {
    counter++;
  }
}
void shortWait() {
  wait(BASE_DELAY);
}
void longWait() {
  wait(3 * BASE_DELAY);
}

void dot() {  
  GPIOA_ODR |= ODR05; // set on
  shortWait();
  GPIOA_ODR = GPIOA_ODR & ~ODR05; // off
}
// super lazy way to have two functions
void dash() {
  GPIOA_ODR |= ODR05; // set on
  longWait();
  GPIOA_ODR = GPIOA_ODR & ~ODR05; // off
}
void main()
{
  // Enable Port A clock gating (GPIOA)
  RCC_AHB2ENR |= 0x01;
  
  // Set GPIO port to be an output
  GPIOA_MODER &= 0xFFFFF7FF;
  
  
  while(1) {
    //totally lazy way to do this
    dash();shortWait(); dot();shortWait();dot();shortWait();dot();longWait(); // B
    dot();shortWait();dash();shortWait();dot();longWait();                    // R
    dot();longWait();                                                         // E
    dash();longWait();                                                        // T
    dash();longWait();                                                        // T
    
    // pause before repeating.
    longWait();
    longWait();
    longWait();
  }
  
}
