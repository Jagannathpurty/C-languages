#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  
  
   int and=0; 
  int or=0; 
  int xor=0; 
  int max_and=0; 
  int max_or= 0; 
  int max_xor=0;
  for (int i = 1; i < n; i++){
      for (int j = i+1; j<=k;j++){
          and = i&j;
          or = i|j;
          xor = i^j;
          if(and>max_and && k>and){
              max_and=and;
          }
          if(or > max_or && k > or){
              max_or = or;
              //printf("%d", max_or);
          }
          if(xor > max_xor && k > xor){
              max_xor= xor;
          }
      }
  }
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

