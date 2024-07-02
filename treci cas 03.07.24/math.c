#include <stdio.h>
#include <math.h>

int main() {

  // Korijen od 9
  double A = sqrt(9);
  printf("%lf \n", A);

  // dva na cetvrtu. Prvo dajemo broj, drugo stepen
  double B = pow(2, 4);
  printf("%lf \n", B);

  // Zaokruzivanje na blizi broj, 3.14 -> 3, 3.6 -> 4
  int C = round(3.14);
  printf("%d \n", C);

  // Zaokruzivanje na veci broj, 3.14 -> 4
  int D = ceil(3.14);
  printf("%d \n", D);

  // Zaokruzivanje na manji broj, 3.14 -> 3
  int E = floor(3.14);
  printf("%d \n", E);

  // Apsolutna razdaljina
  int F = fabs(-100);
  printf("%d \n", F);



  return 0;
}


/*
  Moramo includati math biblioteku na pocetku fajla
  U njoj imamo razne matematicke funckije, kao sto su stepenovanje, korjenovanje,
  i mnogo drugih

*/