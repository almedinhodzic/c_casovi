#include <stdio.h>
#include <stdbool.h>

int main() {

  /*
  "do while" petlja je malo drugačija od "while" petlje. Zamislimo sada da vadiš loptice iz kutije, ali ovaj put moraš izvaditi barem jednu lopticu bez obzira na to ima li ih u kutiji ili ne. Nakon što izvadiš jednu lopticu, provjeravaš ima li još loptica. Ako ih ima, nastavljaš vaditi, a ako nema, prestaneš.

  "do while" petlja u C radi tako da uvijek prvo izvrši zadatak, a tek onda provjerava uvjet. Evo kako to izgleda korak po korak:

  Akcija (Tijelo petlje): Izvadiš jednu lopticu i staviš je na stol.
  Provjera uvjeta: Provjeriš ima li još loptica u kutiji.
  Ponovna akcija: Ako ima još loptica, ponavljaš akciju. Ako nema, prestaneš.
  */

  int brojLoptica = 10;

  int i = 1; // Početak s prvom lopticom
  do {
      // Izvadi lopticu broj 'i' i stavi je na stol
      i++; // Prelaziš na sljedeću lopticu
  } while (i <= brojLoptica);

  /*
    int i = 1;: Počinješ s prvom lopticom.
    do { ... }: Unutar ovih zagrada izvodiš akciju (vadiš lopticu i stavljaš je na stol).
    i++: Povećavaš broj loptice koju vadiš, prelaziš na sljedeću lopticu.
    while (i <= brojLoptica);: Provjeravaš ima li još loptica. Ako je broj loptica koje si izvadio manji ili jednak ukupnom broju loptica, ponavljaš akciju. Ako nema više loptica, prestaneš.
    Dakle, "do while" petlja te uvijek natjera da barem jednom izvršiš zadatak, bez obzira na to što se nalazi u uvjetu. Tek nakon prvog izvršavanja provjeravaš uvjet i odlučuješ hoćeš li nastaviti ili prestati.
  */

  return 0;
}