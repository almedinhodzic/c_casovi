#include <stdio.h>

int main() {

  int x = 1;
  int y = 2;

  int z = x + y;

  int a = 5;
  int b = 2;
  float c = a / (float) b;

  printf("%f \n", c);

  int d = 10;
  d--;
  d--;
  d++;

  printf("%d", d);

  return 0;
}

/*
  Aritmeticki operatori i operacije, klasicne kao i u matematici
  Dodaci su ++, gdje se dodaje vrijednost 1
  -- gdje se oduzima 1 od varijable
  i %(modulo) koje oznacava ostatak - korisno kada hocemo provjeriti da li je broj paran ili neparan
  Prate se prednosti kao i u matematici, gdje je najstarija operacija mnozenje, pa dijeljenje i tako dalje
*/