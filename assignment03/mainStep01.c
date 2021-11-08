#define RCC_BASE     0x40021000
#define RCC_AHB2ENR  (*((unsigned int*) (RCC_BASE + 0x4C)))
#define GPIOA_BASE   0x48000000
#define GPIOA_MODER  (*((unsigned int*) (GPIOA_BASE + 0x00)))
#define GPIOA_ODR    (*((unsigned int*) (GPIOA_BASE + 0x14)))
#define ODR05        (1<<5)

int counter = 0;

void wait() {
  int pauseTime = 100000;
  counter = 0;
  while(counter < pauseTime) {
    counter++;
  }
}
void main()
{
  // Enable Port A clock gating (GPIOA)
  RCC_AHB2ENR |= 0x01;
  
  // Set GPIO port to be an output
  GPIOA_MODER &= 0xFFFFF7FF;
  
  
  while(1) {   
    GPIOA_ODR |= ODR05; // set on
    wait();
        
    GPIOA_ODR = GPIOA_ODR & ~ODR05; // toggle
    wait();
  }
  
}
