#include <stdio.h>

int main(){
/* replace tab by \t, backspace by \b, and backslash by \\ */
   int c;

   while ((c = getchar()) != EOF) {
      if (c == '\t'){
         printf("\\t");
      }
      if (c == '\b'){
         printf("\\b");
      }
      if (c == '\\'){
         printf("\\");
      }
      if  ((c != '\t') && (c != '\b') && (c != '\\')){   
         putchar(c);
      } 
   };
}
/* I would wonder if it is even necessary to mention \b and \\ since it seems that you would not be able to input those responses in a meaningful way... */
