#include <stdio.h>

int main() {
  // %d - for integers
  int x = 1;
  printf("This is number: %d \n", x);

  // %c - for characters
  char a = 'a';
  printf("This is character %c \n", a);

  // %s - for text/strings
  char firstName[] = "Lejla";
  printf("My name is %s \n", firstName);

  // %f - float/decimal numbers
  float pi = 3.14;
  printf("Value of PI is %f \n", pi); // unformated
  printf("Value of PI is %.2f , with only 2 decimal places \n", pi);

  // %lf - long float/double
  double hourlyRate = 12.312312331;
  printf("Hourly rate is is %lf \n", hourlyRate); // unformated
  printf("Hourly rate precised to one decimal point is %.1lf \n", hourlyRate);

  return 0;
}

/*
  Format specifiere koristimo za formatiranje teksta u outputu, odnosno konzoli.
  Imamo njih dosta, ali neki od njih se samo cesto koriste.
  Koriste se unutra u outputu, printu, i ime varijable se daje poslije teksta, odvojeno
  zarezom.

  %d - za cijele brojeve
  %c - za karaktere
  %s - za tekst
  %f - za float/decimalne brojeve sa malom preciznosti. Ako ne dodamo kako bi prikazali
  brojeve poslije tacke, automatski se uzima 6 mjesta. Specificiramo koliko hocemo poslije
  % , npr %.2f za 2 mjesta poslije tacke
  %lf - za double/long float. Isto vazi kao i za float

  Lista format specifiera se moze pogledati ovdje:
  https://www.geeksforgeeks.org/format-specifiers-in-c/
*/