#include <stdio.h>

int main() {

  // Variable declaration
  int x;
  // Variable initialization
  x = 1;

  // Inline declaration and initialization
  int y = 2;

  y = 10;

  printf("%d", x);

  return 0;
}

/*
  Rezervisan prostor u memoriji za snimanje neke vrijednosti.
  2 koraka za to nam trebaju: deklaracija i inicializacija.
  Prije imena varijable moramo odrediti TIP. To je obaveza.
  Najcesce se oba koraka odradjuju istovremeno, kao na liniji broj 11.
  Varijabla sa istim imenom se ne moze opet deklarisati, ali se vrijednost varijable 
  moze mijenjati.
  Varijable trebaju da imaju razumno ime, da znamo sta snima, npr.
  int age = 27; gdje znamo da varijabla cuva godine.
  Konvencija je da se varijable imenuju sa cammelCase konvecijom, 
  gdje ime varijable pocinje sa malim slovom, ali svaka nova rijec u imenu varijable
  pocinje sa velikim slovom. Npr. firstName
*/