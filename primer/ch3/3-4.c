#include <stdio.h>

int main() {
   float flo;

   printf("Enter a floating-point value:");
   scanf("%f", &flo);
   printf("\nfixed-point notation:%f\n",flo);
	 printf("exponential notation:%e\n",flo);
   printf("p notation:%p\n",flo);
   return 0;
}
