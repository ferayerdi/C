#include <stdio.h>
#include <ctype.h>

int main ()
{

  int c;

  while ((c = getchar()) != EOF) {
    if (ispunct (c)) {
      c++;
      c=0;
    }   
    if  (isdigit(c)) {
      putchar ('X');
      c = 0;
    }
    else 
      putchar (c);
  }
}
 