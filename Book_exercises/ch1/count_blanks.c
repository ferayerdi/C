#include <stdio.h>
int main() 
{
  int c, nl, t, space;
  nl = 0;
  t = 0;
  space = 0;

  while ((c = getchar ()) != EOF){
    if (c == '\n')
      nl++;
    else if (c == '\t')
      t++;
    else if (c == ' ')
      space++;
  }

  printf("number of lines is: %d\n", nl);
  printf("number of tabs is: %d\n", t);
  printf("number of spaces is: %d\n", space);
}  
