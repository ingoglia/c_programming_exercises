#include <stdio.h>

//#define IN 1
//#define OUT 0
int main(){
/* prints its input one word per line. */

   int c;

//   state = OUT;
   
   while((c = getchar()) != EOF){
      if ((c == ' ') || (c == '/n') || (c == '/t')
         putchar('\n');
      else if (c != ' ')
         putchar(c);
   }
}  
