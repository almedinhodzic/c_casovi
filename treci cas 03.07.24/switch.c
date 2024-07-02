#include <stdio.h>

int main() {

  int grade;

  printf("Unesi svoju prolaznu ocjenu: \n");
  scanf("%d", &grade);

  switch(grade) {
    case 5:
      printf("Odlicno!");
      break;
    case 4:
      printf("Veoma dobro!");
      break;
    case 3:
      printf("Dobro!");
      break;
    case 2:
      printf("Zadovoljavajuce!");
      break;
    default: 
      printf("Lose");
      break;
  }

  return 0;
}

/*
  Switch je ljepsa zamjena za dosta else if tvrnji. Da ne bi morali pisali dosta else if tvrdji mozemo koristiti switch i case
  Vrijednost koju zelimo provjeravati stavljamo u switch, i u case uslove
  Poslije case-a moramo dodavati break da izadjemo iz tvrdje
  Ako se ne desi ni jedan uslov koji smo ispisali, mozemo pisati u default:
  Default je kao else
*/