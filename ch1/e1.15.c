#include <stdio.h>

/* Rewrite the temperature conversion program of section 1.2 to use a function for conversion */
int main(){
   int f_c(int f);   
   int f;
   for (f = 0; f <= 300; f+=30){
      printf("%d %d\n", f, f_c(f));  
   }
}

int f_c(int f){

   int c; 
   c = ((5 * (f-32))/9);
   return c;
}

