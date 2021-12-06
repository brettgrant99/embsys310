#ifndef _DELAY_
#define _DELAY_

static uint32_t countDown = 0;

void SysTick_Initialize(void);
void delay(uint32_t);

#endif