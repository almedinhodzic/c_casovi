#include <stdio.h>
#include <stdbool.h>

int main() {

  bool sunny = false;
  bool isFOggy = false;

  int temp = 20;

  if(temp > 15 && sunny == true && isFOggy == false) {
    printf("fino je napolju");
  }

  if (temp > 18 || sunny == true) {
    printf("suncano je");
  }


  if(!sunny) {
    printf("nije suncano");
  }

  if(sunny == false) {
    printf("nije suncano");
  }

  return 0;
}

/*
  Logicke operatore koristimo kada koristimo vise uslova
  Logicki operator "and" - &&, kada u ifu zelimo da se ispune svi uslovi, tek tad ce se nas dio koda u ifu izvrsiti
  Logicki operator "or" - ||, kada zelimo samo jedan od uslova da se izvrsi u ifu, tad ce se nas dio koda i ifu izvrsiti
  Logicki operator "not" - !, kada hocemo da vidimo ako nesto nije istinito, da se nas dio koda izvrsi
  Logicke operatore mozemo kombinovati npr. 
  if(isSunny == true && (isFoggy == true || temp > 18)) { prinft("nesto isprintati") }

  Zadatak:
  Napisati nekoliko brojeva i nekoliko bool varijabli sa true ili false i napisati nekoliko uslova sa logickim operatorima. Isprobati i kombinovanje "and" i "or" operatora.
*/