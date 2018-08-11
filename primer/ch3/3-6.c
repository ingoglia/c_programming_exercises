#include <stdio.h>

int main(){
   float water;
   printf("Give me a number of quarts of water:");
   scanf("%f",&water);
   printf("\nThere are %e water molecules in there.\n",water*950*3.0*10e-23);
   return 0;
}
