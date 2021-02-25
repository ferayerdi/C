#include <stdio.h>
int main(int argc, char** args){
  int x, y, z;

  x = 3;
  y = 9;

  z = x;
  x = y;
  y = z;

  if (x> y) {
    printf("hello\n");
  }

  while (x > 0) { //loop (cycle)
    printf("%i\n", 2 * x); //print on interger
    x--; //lower by one
  }

  for (x = 1; x <= 5; x += 2) {
    printf("y - x = %i now\n", y - x); //regular content
  }

  return 1;
}
