#include <stdio.h>  
#include <stdlib.h> 
#include <ctype.h>
#include "calc.h"

#define MAXOF 100

int main() {
  int type;
  double op2;
  char s[MAXOF];

  int assign = 0;

  while ((type = getop(s)) != EOF) {
    switch (type) {
    case NUMBER:
      push(atof(s));
      break;
    case '+':
      push(pop() + pop());
      break;
    case '*':
      push(pop() * pop());
      break;
    case '-':
      op2 = pop();
      push(pop() - op2