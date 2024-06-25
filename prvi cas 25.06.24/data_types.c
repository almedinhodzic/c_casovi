#include <stdio.h>
#include <stdbool.h>

int main() {

  // Integer 
  int age = 21;
  // float
  float pi = 3.14;
  // double
  double hourlyRate = 3.124312431343;
  // char
  char x = 'x';
  // array of chars
  char firstName[] = "Almedin";
  printf("%s", firstName);
  // boolean
  bool isCold = true;
  // long long int
  long long int hugeNumber = 12434234324;
  // unsigned int
  unsigned int y = 4234;

  return 0;
}

/*
  Data tipovi su tipovi podataka koje proslijedjujemo varijablama.
  Data tipovi u zavisnosti kojeg su tipa, zauzimaju i razlicit broj bajtova
  u memoriji.
  Razlog zasto npr. ima vise tipova za brojeve je cuvanje memorije,
  jer u vrijeme kada je C programski jezik napravljen, racunari nisu imali puno
  memorije. 
  U novijim programskim jezicima, nema toliko tipova kao prije, jer memorija vise nije 
  problem.
  Note: U C programskom jeziku ne postoji string kao u vecini drugih jezika, koji predstavlja tekstualnu datu, jer C nije objektno orijentiran, a string je objekat.

  Najbitniji data tipovi:
  int - cijeli broj, zauzima 4 bajta memorije. (cesto cujemo ime 4-byte integer) Npr. godine
  char - jedan karakter, jedno slovo, a mozemo snimati i brojeve od -127 do 128,
  ali se oni pretvaraju u karaktere po ASCII. Zauzima 1 bajt. 
  Char ide izmedju jednostrukih navodnika.
  float - decimalni broj sa malom preciznoscu. Zauzima 4 bajta. Npr. za vrijednost broja PI
  double - decimalni broj sa velikom preciznoscu. Zauzima 8 bajtova. Npr. Za novac
  boolean - boolove vrijednosti, true ili false. Zauzimaju 1 bajt. Kada za nesto hocemo
  reci je li nesto istinito ili nije. Prevodi se u 1 za tacno, 0 za netacno.
  long long int - ogroman cijeli broj
  unsigned stvari za pozitivne brojeve koristimo, npr unsigned int.
  char ime_varijable[] - za niz karaktera, npr kada hocemo neki veci tekst. Npr. Ime
  Niz karaktera ide izmedju dvostrukih navodnika.

  Svi data tipovi u C programskom jeziku mogu se vidjeti na sljedecem linku:
  https://www.geeksforgeeks.org/data-types-in-c/
*/