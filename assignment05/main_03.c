extern int swapCharsAsm(char *, char *);

int main()
{
  int result;
  char *char01 = "A";
  char *char02 = "A";
    
  result = swapCharsAsm(char01, char02);
  
  return 0;
}
