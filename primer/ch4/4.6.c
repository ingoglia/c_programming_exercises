#include<stdio.h>
#include<string.h>

int main(void)
{
	char first[30];
  char last[30];

	printf("I woud like your first and then your last name thank you:");
  scanf("%s %s", first, last);
  printf("%-10s %-10s\n%-10lu %-10lu\n",first, last, strlen(first), strlen(last));
  return 0;
}
