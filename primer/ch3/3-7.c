#include <stdio.h>

int main(){
  float height;
  printf("Tell me your height in inches:");
  scanf("%f",&height);
  printf("\nYou are %f cm tall.\n",height*2.54);
  return 0;
}

