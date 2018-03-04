#include <stdio.h>

int main(){
//print a histogram of the frequencies of different characters in its input

   int c, i, j, n, t;
   int countc[100];
   char wordc[100];
   for (i = 0; i <= 100; ++i){
        wordc[i] = '0';
        countc[i] = 0; 
   }

   while((c = getchar()) != EOF) { 
      if (c == '0'){ //account for the 0 element
        printf("in zero");
        countc[1]++;
      }
      if (c != '0'){ 
         for (j = 2; j <= 100; ++j){
            if (c == wordc[j]){ //if the char exists in the list count it
             ++countc[j];
             break;
             } 
            else if ((c != '\n') && (c != wordc[j]) && (wordc[j] == '0') && (wordc[j-1] != 'c')){ //add the char to the list and count it
               wordc[j] = c;
               ++countc[j];
               break;
            }
         }
      }
    }
   printf("\nHistogram for frequency of words of a given length. \n");
   for (n = 0; n < 101; ++n){
     if (countc[n] != 0){
        printf("%c   ", wordc[n]);
        for(t = 0; t < countc[n]; ++t)
           printf("[]");
        printf("\n");
     }
   }
}
