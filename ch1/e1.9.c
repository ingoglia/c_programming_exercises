#include <stdio.h>

int main(){
   int c;
   int blank;
   blank = 0;
   
   c = getchar();
/* replace each string of one or more blanks by a single blank. */
   while (c != EOF){
      if (c == " ")
         blank++
         if (blank > 1)           
           blank = 1;
           putchar("");
      else if ( c != " ")
         blank = 0;
         putchar(c);       
   };
}
