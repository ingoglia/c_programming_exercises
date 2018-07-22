#include <stdio.h>

int main()
{
    float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Celsius to Fahrenheit conversion!\n");
    celsius = lower;
	while (celsius <= upper) {
	     fahr = (celsius * 9.0/5.0) + 32;
	     printf("%3.0f %6.0f\n", celsius, fahr);
	     celsius = celsius + step;
	}
}	


