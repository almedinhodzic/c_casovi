#include <stdio.h>
#include <string.h>

int main() {

  char sign;
  float temp;
  float result;

  printf("Kolika je temperatura danas? \n");
  //scanf("%f", &temp);
  temp = 37;
  printf("Temperatura je %f \n", temp);

  printf("Da li zelite temperaturu u Celsiusima ili Farenheitima? Za Celsius upisite C a za Farenheit upisite F \n");
  scanf("%c", &sign);

  sign = strupr(sign);

  if (sign == 'C') {
    result = (temp-32)/1.8;
    printf("Temperatura je %f", result);
  } else if (sign == 'F') {
    result = (temp*1.8)+32;
    printf("Temperatura je %f", result);
  } else {
    printf("Pogresan unos");
  }
  

  return 0;
}



/*
  Pitati da li zelimo temperaturu u Celsius ili Farenheit
  Sa scanf uzeti input
  Poslije scanf, koristiti toupper (icludiati #include <ctype.h>) na inputu, jer korisnik moze unijeti i malo slovo c, ali i veliko, pa da nam je laksa provjera, i onda sa if, else if i else rijesiti sljedece
  Provjeravati da li je C, ili F
  Napisati u cemu je temperatura
  Onda uzeti input za varijablu temp koja je tipa float
  Ako je temperatura u celzijusima, onda pretvoriti u farenheit i isprintati
  Formulu za pretvaranje pronaci na netu
  Ako je farenheit, obrnuto odraditi i isprintati. I zaokruziti na 2 broja iza zareza

*/

/*
  Ako je unos npr 38.5, i izabran celzius, koristiti formuli za izracunavanje celzijusa iz farenheitea, racunati da je 38.5 u farenheitima
  I obrnuto. 
*/