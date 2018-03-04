#include <stdio.h>

int main(){
//print a histogram of the frequencies of different characters in its input

   int c, i, j, n;
   int wordc[100], countc[100];
  
   for (i = 0; i <= 100; ++i)
        wordc[i] = countc[i] = 0; 

   while((c = getchar()) != EOF) {
      for (j = 0; j < 101; ++j){
         if (c == wordc[j]){
             ++countc[j];
          } 
         else if ((c != wordc[i]) && (i > 0) && (wordc[i] == '0')) {
             wordc[j] = c;
             ++countc[j];
          }
            }
   }
   for (n = 0; n <= wordc[98]; ++n)
      printf("%c ", wordc[n+1]);
}

