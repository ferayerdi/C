#include <stdio.h>

int main()
{

  printf("Celsius to Fahrenheit\n");
  
  float celsius, fahr;
  int upper, step, lower;

  lower = 0;
  upper = 100;
  step = 10;

  celsius = lower;

  while (celsius <= upper) {
    fahr = (1.8 * celsius) + (32.0);
    printf("%4.0f %10.0f\n", celsius, fahr); 
    celsius = celsius + step;
      }

}

