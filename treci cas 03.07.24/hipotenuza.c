#include <stdio.h>
#include <math.h>

int main() {

  double A;
  double B;

  printf("Unesi stranu A: \n");
  scanf("%lf", &A);

  printf("Unesi stranu B: \n");
  scanf("%lf", &B);

  double C = sqrt(A*A + B*B) ;
  printf("%lf", C);


  return 0;
}

/*
  Izracunavanje hipotenuze pravouglog trougla
  C na kvadrat = Korijen iz(A na kvadrat + B na kvadrat)
*/
