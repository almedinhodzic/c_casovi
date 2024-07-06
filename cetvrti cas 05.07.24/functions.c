#include <stdio.h>


char sum(int num1, int num2) {

  int result = num1 + num2;

  return result;

}

char getChar() {

  char nesto = 'A';

  return nesto;

}


int main() {

  int mojBroj = sum(1, 2);

  printf("%d", mojBroj);


  return 0;
}

/*
  Funkcije su jedna od najbitnijih stvari u programiranju. Koristimo ih kada dio koda zelimo iskoristiti na vise mjesta, pa da se ne bi stalno ponavljali.
  Funkcija moze da ne vraca vrijednost, ali moze i da vrati. 
  Funkciji iz programa mozemo proslijediti argumente, a direktno u funkciji pravimo parametre, i dajemo im tipove.
  argument = parametar.
  Npr.   drive(int speed) {} - parametar je speed, koji ima tip int(broj), a iz programa moramo proslijediti argument npr. pozovemo funckiju   drive(90); 
  Ako nasa funkcija ne vraca nista, npr. samo printa nesto, prije imena funckije pise void, a ako imamo povratnu stvar, dajemo prije imena tip podatka koji vracamo, npr   
  int drive(int speed) { return neki_broj }; 
  Kada nasa funkcija vraca nesto, onda moramo na kraju funkcije koristiiti return i dati povratnu vrijednost.

  Zadatak: Napisati funckiju koja samo ispisuje program je startao\n, nadamo se finom iskustvu. Pozvati ovu funkciju na pocetku programa.
  Napisati funckiju koja prima ime kao parametar, i pozdraviti dato ime. Iz programa pozvati funkciju i proslijediti svoje ime.
  Napisati funckiju koja ce primiti godinu u buducnosti, npr 2036, i godinu rodjenja npr. 1997, izracunati vrijednost koliko cemo imati godina tad, i vratiti tu vrijednost.
  Snimiti je u varijablu u programu koja se zove result, sve su int tipovi, i isprintati u programu vrijednost.
  Napisati funkciju koja prima parametar tipa float, koje ste kilaze ili visine i isprintati.
  I na kraju napisati funkciju koja ce isprintati program je zavrsio, ugodan ostatak dana.
*/