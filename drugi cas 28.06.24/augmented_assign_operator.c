#include <stdio.h>

int main(){

  // Longer approach
  x = 10;
  x = x + 5;

  // short;
  x+=10;

  x-=3;

  // Same for division and multiplication, and modulus
  x*=2;
  x/=2;
  x%=2;

  printf("%d", x);

  return 0;
}

/*
  Samo precica
  Npr. kada imamo neku varijablu i u njoj snimimo broj neki, mozemo joj povecati vrijednost jednostvnim pristupom npr. x = x + 10, ali mozemo i krace gdje ce automatski program znati da povecajemo trenutnu vrijednost sa zeljenom vrijednoscu x+=10; Isto tako radi i za oduzimanje, gdje bi bilo x-=10;
*/