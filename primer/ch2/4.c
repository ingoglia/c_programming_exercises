#include <stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
  printf("For he is a ");
  jolly();
  printf(" fellow!\n");
  printf("For he is a ");
  jolly();
  printf(" fellow!\n");
  printf("For he is a ");
  jolly();
  printf(" fellow!\n");
  deny();	
  return 0;
}

void jolly(void)
{
   printf("rather unjolly");
}

void deny(void)
{
  printf("Which nobody can deny\n");
}
