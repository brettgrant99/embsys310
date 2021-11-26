
void swap_pointer(int **in01, int **in02) {
  
  int *tmp = *in02;
  *in02 = *in01;
  *in01 = tmp;
    
}
int main()
{
  int x = 2000000;
  int y = 1000000;
  
  int *xPtr;
  int *yPtr;  
  
  xPtr = &x;
  yPtr = &y;
 
  swap_pointer(&xPtr, &yPtr);
   
  return 0;
}