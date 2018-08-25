// ask for first and last name and print last, first
#include <stdio.h>
#include <string.h>

int main(void){
char first[30], last[30];
printf("Give me your first and last name:\n");
scanf("%s %s",first, last);
printf("\n%s, %s\n",last, first);
return 0;
}

