#include <stdio.h>
int main(int argc, char** args){
  float x = 1;
  int y = 10;
  while (x <= y) {
    y = y - 1;
    printf("%d",y);
  }
  printf("done\n");

  return 1; 
}
