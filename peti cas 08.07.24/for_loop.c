#include <stdio.h>

int main() {

  // Zamislimo da si u učionici i imaš kutiju punu loptica. Želiš svaku lopticu izvaditi iz kutije i staviti je na stol.

  /*
    Početak (Inicijalizacija): Učitelj ti kaže odakle počinješ brojati loptice. Recimo, počinješ od prve loptice (lopta broj 1).

    Uvjet (Usporedba): Učitelj te pita je li ostalo još loptica u kutiji. Ako ima loptica, nastaviš vaditi jednu po jednu. Ako nema više loptica, prestaneš.

    Akcija (Tijelo petlje): Izvadiš jednu lopticu iz kutije i staviš je na stol.

    Sljedeći korak (Inkrementacija): Učitelj ti kaže da pređeš na sljedeću lopticu (npr. lopta broj 2, pa 3, itd.).
  */

  int brojLoptica = 999;

  for (int i = 1; i <= brojLoptica; i++) {
      // Izvadi lopticu broj 'i' i stavi je na stol
      printf("%d \n", i);
  }

  /*
    int i = 1;: Ovo je početak, gdje počinješ s prvom lopticom.
    i <= brojLoptica;: Ovo je uvjet. Ako je broj loptica koji si izvadio manji ili jednak ukupnom broju loptica, nastaviš vaditi.
    i++: Ovo je sljedeći korak. Ideš na sljedeću lopticu svaki put kada završiš s trenutnom.
  */
}


/*
  
*/