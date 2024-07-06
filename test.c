#include <stdio.h>
#include <ctype.h>

int main() {

  int grade;

  printf("S koliko si prosla?");
  scanf("%d", &grade);

  switch(grade) {
    case 5:
      printf("prosla si s 5");
      break;
    case 4:
      printf("prosla si s 4");
      break;
    case 3:
      printf("prosla si s 3");
      break;
    case 2:
      printf("prosla si s 2");
      break;
    case 1:
      printf("prosla si s 1");
      break;
    default:
      printf("pogresan unos");
      break;
  }

  return 0;
}

