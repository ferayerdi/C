#include <stdio.h>

int main() 
{

  printf("Fahrenheit to Celsius\n");

  float fahr, celsius;
  int lower, upper,step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius); /*print as florating point, at least 6 wide and 2 after decimal point*/
    fahr = fahr + step;
  }

}