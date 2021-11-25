#include "stack.h"


#define TRUE 1
#define FALSE 0

// data store
int stackStore[STACK_SIZE];

// element counter
int count;
int isInit = FALSE;

// Pointer to stack element
int* ptr;

// LIFO Queue is Empty if count == 0;
// LIFO Queue is Full count == STACK_SIZE

// Initialize internals of the queue
void stack_init(void)
{
    ptr = 0;    
    for(int i=0; i<STACK_SIZE; i++)
    {
        stackStore[i] = 0;
    }
    count = 0;
    isInit = TRUE;
}

// Add data
// If stack is full return error
// Otherwise return success
int stack_push(int data)
{
    // stack is full
    if (!isInit || count == STACK_SIZE)
    {
        return -1;
    }
            
    if (ptr == 0)
    {
        ptr = &stackStore[0];
    }
    else
    {
        ptr++;
    }
    
    *ptr = data;
    count++;
    return 0;
}

// Get data from stack
// If stack is empty return error
// Otherwise return success
int stack_pop(int* data)
{   
    // queue is empty
    if (!isInit || count == 0)
    {
        return -1;
    }    
   
    *data = *(ptr--);
    count--;
        
    return 0;
}
int stack_isEmpty() 
{
  if(!isInit) {
    return -1;
  }
   
  if(count == 0) {
    return 1;
  } else {
    return 0;
  }
}
int stack_isFull() 
{
  if(!isInit) {
    return -1;
  } else {
    return !stack_isEmpty();
  }
}
