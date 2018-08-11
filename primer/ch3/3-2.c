#include <stdio.h>
/* Enter an ASCII code and the program will print out the mapped value*/
int main(void)
{
  int ascii;
  char c;  
  printf("Please enter an ASCII code to be converted:");
  scanf("%d", &ascii);  
  c=(int)ascii;
  printf("\nThe ASCII code %d = %c.\n", ascii, c); 
  return 0;
}
