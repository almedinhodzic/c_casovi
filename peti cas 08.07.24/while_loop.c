#include <stdio.h>
#include <stdbool.h>

int main() {

  /*
    Zamislimo sada da ti i dalje želiš vaditi loptice iz kutije i stavljati ih na stol, ali ovaj put bez pomoći učitelja koji ti kaže koliko loptica imaš. Ti jednostavno vadiš loptice dokle god ih ima u kutiji.

    "while" petlja u C je kao da stalno gledaš u kutiju i provjeravaš ima li još loptica. Ako ih ima, izvadiš jednu i staviš je na stol. Ako nema, prestaneš.
  */

  /*
    Provjera uvjeta: Prvo provjeriš ima li još loptica u kutiji.
    Akcija (Tijelo petlje): Ako ima loptica, izvadiš jednu i staviš je na stol.
    Ponovni uvjet: Ponovo provjeriš ima li još loptica u kutiji. Ako ih ima, ponavljaš akciju. Ako nema, prestaneš.
  */

  int brojLoptica = 99;
  int i = 1; // Početak s prvom lopticom
  while (i <= brojLoptica) {
      // Izvadi lopticu broj 'i' i stavi je na stol
      i++; // Prelaziš na sljedeću lopticu
  }

  /*
    int i = 1;: Počinješ s prvom lopticom.
    while (i <= brojLoptica): Provjeravaš ima li još loptica. Ako je broj loptica koje si izvadio manji ili jednak ukupnom broju loptica, nastavljaš.
    i++: Povećavaš broj loptice koju vadiš, idući na sljedeću lopticu.
  */

  return 0;
}