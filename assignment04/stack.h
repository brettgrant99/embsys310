#ifndef __STACK_H__
#define __STACK_H__

#define STACK_SIZE 3

void stack_init(void);
int stack_push(int data);
int stack_pop(int* data);
int stack_isEmpty(void);
int stack_isFull(void);

#endif
