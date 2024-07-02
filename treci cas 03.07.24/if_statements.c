#include <stdio.h>

int main() {

  int age;

  printf("Unesi godine: \n");
  scanf("%d", &age);

  if(age > 18) {
    printf("Punoljetni ste");
  } 
  else if(age == 18) {
    printf("18 tacno");
  }
  else {
    printf("Niste punoljetni");
  }

  return 0;
}

/*
  Kada u programu imamo izbore, da li je nesto to sto provjeravamo
  == - jednako
  != - razlicito
  > - vece
  < - manje
  >= - vece ili jednako
  <= - manje ili jednako
*/