int func01(int in01, int in02, int in03, int in04, int in05) {
  
  int tmpVal = in01 + in02 + in03 + in04 + in05;
  
  return tmpVal;
  
}
int func02(int in01) {
  
  int retVal = 1;
  
  int par01 = in01;
  int par02 = par01 + 8;
  int par03 = par02 + 8;
  int par04 = par03 + 8;
  int par05 = par04 + 8;
  
  retVal = func01(par01, par02, par03, par04, par05);
  
  return retVal;
  
}
int main()
{
  int startVal = 0;
  volatile int retVal = 0;
  
  retVal = func02(startVal);
  
  
  return 0;
}
