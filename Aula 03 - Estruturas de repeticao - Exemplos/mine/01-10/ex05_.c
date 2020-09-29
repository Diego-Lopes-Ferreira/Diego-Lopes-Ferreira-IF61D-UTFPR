/*

  Calcular a velocidade média para cada um de vários veículos que percorrem uma
  distância X em um tempo Y.

  entradas:
    x, y;
  saidas:
    velocidade
  processamento:
    enquanto o usuario nao disser que quer sair:
      pergunte x
      pergunte y
      mostre x / y "km/h";
*/
#include <stdio.h>

int pergunte() {
  char user[2];
  printf("\nDeseja continuar? \n[s/n]>>> ");
  fflush(stdin);
  gets(user);
  return (strcmp(strlwr(user), "s") == 0);
}

void calculaVelocidade() {
  float x = 0, y = 0;
  printf("Digite o valor da distancia [km] >>> ");
  scanf("%f", &x);
  printf("Digite o valor do tempo     [h]  >>> ");
  scanf("%f", &y);
  if (y == 0) {
    printf("Erro: divisao por zero \n");
  } else {
    printf("Velocidade media = %.2f km/h \n", (x / y));
  }
}

int main() {
  while (1) {
    calculaVelocidade();
    if (pergunte() == 0) {
      printf("Exit \n");
      break;
    }
    printf("\n  Continue \n\n");
  }
  return 0;
}