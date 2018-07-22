#include <stdio.h>

int main(){
   int c;
   int blank;
   blank = 0;
   
/* replace each string of one or more blanks by a single blank. */
   while ((c = getchar()) != EOF){
      if ((c == ' ') && (blank < 1)){
         putchar(' ');
         ++blank;
      }  
      else if ((c == ' ') && (blank > 1)){    
            --blank;
            putchar('\0');
      }
      if ( c != ' '){
         blank = 0;
         putchar(c); 
      }      
   };
}
