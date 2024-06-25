#include <stdio.h> // Include fajla za input output

int main() {
  // New line
  printf("Show texts in new lines: \n");
  printf("New\n");
  printf("Line\n");
  // Tab, 4 spaces
  printf("Separate text with \t 4 spaces");
  // Quotes inside
  printf(" \"Youre awesome\", he said");
  // Slash inside
  printf("I am using \\ inside text");
  return 0;
}

/*
  Escape sequences su korisni kada hocemo da formatiramo tekst
  koji ce biti prikazan u konzoli. Njih ima dosta, ali ovo su najcesci na koje
  cemo naici. 
  \n - novi red
  \t - tab (4 razmaka)
  \\ - kada hocemo u tekstu prikazati \
  \" \" - Kada navodnike hocemo koristiti u prikazu
  Lista svih moze se vidjeti na sljedecem linku:
  https://www.geeksforgeeks.org/escape-sequence-in-c/
*/