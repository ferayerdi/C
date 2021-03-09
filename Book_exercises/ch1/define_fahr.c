#include <stdio.h>

int main()
{
  printf("Fahrenheit to Celsius\n");

#define LOWER 0  /* es define, luego el symbolic name, despues replacement text, este puede ser numeros o letras*/
#define UPPER 300
#define STEP 20

  int fahr;
  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) /*podemos ver que aqui en vez de poner los numeros solo ponemos el texto que definimos arriba*/ 
    printf("%4d %9.1f\n", fahr, (5.0/9.0) * (fahr-32));
}