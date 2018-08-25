#include<stdio.h>
#include<float.h>

int main(void)
{
	double num1=1.0/3.0;
  float num2=1.0/3.0;
  printf("num1=%.4f,%.12f,%.16f\n",num1,num1,num1);
  printf("num2=%.4f,%.12f,%.16f\n",num2,num2,num2);
  printf("%d,%d\n",FLT_DIG,DBL_DIG); 
  return 0;
}
