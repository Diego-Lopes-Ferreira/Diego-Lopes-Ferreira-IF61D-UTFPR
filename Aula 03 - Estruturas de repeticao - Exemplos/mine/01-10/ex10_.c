/*

  Para um grupo indeterminado de 2 números quaisquer, informar para cada grupo:
    a) o maior
    b) o menor
    c) se são iguais

  entradas:
    x, y;
  saidas:
    o maior, o menor, se são iguais

  processamento:
    se x == y:
      mostre que sao iguais
    senao:
      se x > y:
        mostre maior = x, menor = y
      senao:
        mostre maior = y, menor = x
*/
#include <stdio.h>

int pergunte() {
  char user[2];
  printf("\nDeseja continuar? \n[s/n]>>> ");
  fflush(stdin);
  gets(user);
  return (strcmp(strlwr(user), "s") == 0);
}

int main() {
  float x, y;
  int counter = 0;

  while (1) {
    printf("Digite um numero    >>> ");
    scanf("%f", &x);
    printf("Digite outro numero >>> ");
    scanf("%f", &y);

    if (x == y) {
      printf("%.2f = %.2f \n", x, y);
    } else {
      if (x > y) {
        printf("%.2f maior que %.2f \n", x, y);
      } else {
        printf("%.2f maior que %.2f \n", y, x);
      }
    }

    counter++;
    if (pergunte() == 0) {
      printf("Exit (%d executions) \n", counter);
      break;
    }
    printf("\nContinue... \n\n");
  }

  return 0;
}