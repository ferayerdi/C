#include <stdio.h>
#include <ctype.h>

int main  () 
{
  int c, i = 0;
  int space = 0;
    
  while ((c = getchar ()) != EOF) {
    if (c == '<' || c == '>') 
      c = getchar ();
        
    if (isspace(c)) {
      space++;
    } else {
      if (space) {
	putchar ('_');
	space = 0;
      }
    }
    putchar (c);
        
  }
}