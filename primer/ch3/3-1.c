#include <stdio.h>

int main(void) 
{
	int int_overflow;
  float float_overflow;
	float float_underflow;
 
  int_overflow = 10000000000000000;
  float_overflow = 20000000000000000.453;
  float_underflow = .00000000000000000000000034;

  printf("int_overflow = %d.\n", int_overflow);
  printf("float_overflow = %f.\n", float_overflow);
  printf("float_underflow = %f.\n", float_underflow);
  return 0;
}
