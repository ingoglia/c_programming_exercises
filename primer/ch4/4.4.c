#include<stdio.h>
#include<string.h>

int main(void)
{
	char name[30];
	float height;

	printf("What is your height in inches and your first name?:");
  scanf("%f %s", &height, name);
  printf("\n%s, you are %.3f feet tall\n", name, height/12);
	return 0;
}
