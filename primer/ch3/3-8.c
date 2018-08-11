#include <stdio.h>

int main(void){
  float cups;
  printf("Tell me the cups number of:");
  scanf("%f",&cups);
  printf("\nPints:%f\n", cups*2);
  printf("Ounces:%f\n", cups*8);
  printf("Tablespoons:%f\n", cups*8*2);
  printf("Teaspoons:%f\n",cups*8*2*3);
  return 0;
}
