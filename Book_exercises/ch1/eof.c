#include <stdio.h>
int main(){
  int c;

  while((c = getchar()) != EOF){
    printf("valor de la expresion getchar()!=EOF es: %d\n", c!=EOF);
  }
  printf("Valor de la expresion getchar()!=EOF es: $d\n", c!=EOF);
  printf("el valor de EOF es: %d\n", c);

  return 0;
}



