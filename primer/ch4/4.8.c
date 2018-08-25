#include<stdio.h>

int main(void)
{
  float miles;
  float gallons;

	printf("Enter the number of miles traveled and the number of gallons of gas consumed:");
  scanf("%f %f",&miles, &gallons);
  printf("\nThis is %.1f miles per gallon.\n",miles/gallons);
  printf("In European units that would be %.1f liters per 100 km.\n",235.21/(miles/gallons));
  return 0;
}
