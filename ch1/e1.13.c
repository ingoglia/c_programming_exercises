#include <stdio.h>

#define IN 1
#define OUT 0
int main(){

/* print a histogram of the lengths of words in the input. horizontal */

   int wordc[20];
   int c, i, j, n, state;

   for (i = 0; i < 20; ++i)
      wordc[i] = 0;

   state = OUT;
   while ((c = getchar()) != EOF){
      if (c == ' ' || c == '\n' || c == '\t'){
         ++wordc[n - 1];  
         n = 0;
         state = OUT;
      } 
      else if (state == OUT){
         state = IN;
         ++n;
      }
      else if (state == IN){
         ++n;
      }
   }
   printf("\nHistogram for frequency of words of a given length. \n");
   for (i = 0; i < 20; ++i){
      printf("%d ", i+1);
        for(j = 0; j < wordc[i]; ++j)
         printf("[]");
      //j = 0;
      printf("\n");
   }
}




