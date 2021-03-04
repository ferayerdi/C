#include <stdio.h>
#define k 20
#define max 256

int main(){
  int i, prime, binary, counter = 0;
  int state = 0;
  unsigned long bin = max;
  
  printf("these are the prime numbers:\n");
  for (prime = 2; counter <= k; prime++){
    state =0;
    for (i = 2;  i <= prime; i++){
      if (prime%i == 0)
	state++;
    }   
    if (state  == 1)
      printf("%02d-",prime);
    counter++;
    state =0;
  }
  printf ("\nthese are binary:\n\t");
       
}
 
    