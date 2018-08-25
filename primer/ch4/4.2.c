#include<stdio.h>
#include<string.h>

int main(void){
char first[30];

printf("Give me your first name:\n");
scanf("%s",first);

printf("a.\"%s\"\n",first);
printf("b.\"%20s\"\n",first);
printf("c.\"%-20s\"\n",first);
printf("d.   %s\n",first);

return 0;
}
