#include <stdio.h>
/* copy input to output; 2nd version */
int main()
{
   int c;
   c = getchar() != EOF;
   printf("%c\n", c);
}
