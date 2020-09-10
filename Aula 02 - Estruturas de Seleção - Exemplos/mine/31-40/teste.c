#include <stdio.h>
#include <string.h>
int main() {
  char letra[2];
  printf("Digite uma letra \n");
  fflush(stdin);
  gets(letra);

  switch (letra) {
    case "a":
      printf("Olha, voce digitou a \n");
      break;

    default:
      printf("ASdadasdasdsa \n");
      break;
  }
  return 0;
}