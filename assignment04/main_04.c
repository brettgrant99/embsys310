int checkEndianess(short int* in) {
  int retVal = -99;  // default value
  char* test01 = (char*)in;
  if(*test01 == 0x00 && *(++test01) == 0x11) {
    retVal = 0; // little endian
  } else if(*test01 == 0x11 && *(++test01) == 0x00) {
    retVal = 1; // big endian
  }
  
  
  return(retVal);
}

int main()
{
  short int a = 0x1100;
  
  int retVal = checkEndianess(&a);
  
  return 0;
}
