/*

  Obter vários grupos de dois números quaisquer, e informar (para cada grupo):

    a) a soma destes números;

    b) a subtração destes números;

  entradas:

  saidas:

  processamento:

*/
#include <stdio.h>

int pergunte() {
  char user[2];
  printf("\nDeseja continuar? \n[s/n]>>> ");
  fflush(stdin);
  gets(user);
  return (strcmp(strlwr(user), "s") == 0);
}

int opcao() {
  char user[2];
  float x = 0, y = 0;
  printf("Digite um numero qualquer >>> ");
  scanf("%f", &x);
  printf("Digite um outro qualquer  >>> ");
  scanf("%f", &y);
  printf("Selecao \n");
  printf("  [a] - Soma \n");
  printf("  [b] - Subtracao \n");
  printf("[a/b]>>> ");
  fflush(stdin);
  gets(user);
  if (strcmp(strlwr(user), "a") == 0) {
    printf("[a] %.2f + %.2f = %.2f\n", x, y, (x + y));
  } else if (strcmp(strlwr(user), "b") == 0) {
    printf("[b] %.2f + %.2f = %.2f\n", x, y, (x - y));
  } else {
    printf("Opcao nao \n");
  }
}

int main() {
  int counter = 0;
  while (1) {
    counter++;
    opcao();
    if (pergunte() == 0) {
      printf("Exit (%d executions) \n", counter);
      break;
    }
    printf("\n  Continue \n\n");
  }
  return 0;
}