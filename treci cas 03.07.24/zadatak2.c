#include <stdio.h>

int main() {

  char operator;
  double num1;
  double num2;
  double result;

  // switch na operatoru itd...

  printf("Koju operaciju zelite?");
  scanf("%c", &operator);
  printf("Unesite broj 1");
  scanf("%lf", &num1);
  printf("Unesite broj 2");
  scanf("%lf", &num2);

  switch(operator) {
    case '+': 
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*': 
      result = num1 * num2;
      break;
    case '/': 
      result = num1 / num2;
      break;
    default:
      printf("Pogresan unos");
      break;
  }

  if(result) {
    printf("Rezultat je %lf", result);
  }

  return 0;
}


/*
  Uzeti inpute za brojeve i operator, i sa switch provjeravati operator
  da li je +, -, /, * i ako nije validan
  Izracunati i isprintati rezlutat
*/