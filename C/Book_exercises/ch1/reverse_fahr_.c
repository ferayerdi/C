#include <stdio.h>

int main()
{
  printf("Fahrenheit to Celsius\n");

  int fahr; /* que variable usamos, en este caso fahr */
  for (fahr = 300; fahr >= 0; fahr = fahr - 20) /* loop, inicia dando valor a las variable, luego hace el test y ejecuta si es verdad el printf, y luego el incremento de fahr */
    printf("%4d %9.1f\n", fahr, (5.0/9.0) * (fahr-32)); /* 4d es print as decimal integer */
}