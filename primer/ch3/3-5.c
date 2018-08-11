#include <stdio.h>

int main(){
   float age;

   printf("Tell me your age and I'll tell you a secret:");
   scanf("%f",&age);
   printf("Oh my god...you are %f seconds old....\n",age*3.156*10e7);
   return 0;
} 
