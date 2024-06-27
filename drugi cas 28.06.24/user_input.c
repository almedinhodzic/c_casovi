#include <stdio.h>

int main() {

  int age;
  char name[25]; // bytes



  printf("What is your name?");
  //scanf("%s", &name);
  fgets(name, 25, stdin);

  printf("How old are you? \n");
  scanf("%d", &age);

  printf("You are %d old \n", age);
  printf("Your name is %s", name);

  return 0;
}

/*
  Da uzmemo input od korisnika. Npr. da korisnik nase aplikacije unese koliko ima godina, kako se zove itd.
  scanf() se koristi za to
  Moramo koristiti format specifiere da bi primili input koji odgovara tipu varijable koje smo deklarisali
  Ali, prije imena varijable moramo koristiti &
  Npr. scanf("%d", &age);
  Ali, sa scanf ne mozemo pisati text koji ima razmak, jer cemo dobiti gresku
  moramo koristiti fgets i dajemo mu ime varijable, broj karaktera i standardni input
*/