#include<stdio.h>

int main(void)
{
   float number;

   printf("Enter a number: ");
	 scanf("%f",&number);
	 printf("\na.The input is %.1f or %.1e.\n", number, number);
   printf("b.The input is %+.3f or %.3e.\n", number, number);
   return 0;
}
   
