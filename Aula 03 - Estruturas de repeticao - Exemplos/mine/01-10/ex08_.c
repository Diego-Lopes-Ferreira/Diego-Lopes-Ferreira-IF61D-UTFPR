/*

  Para cada um de 10 números fornecidos pelo usuário informar se este n:
    positivo ou negativo.
    e par ou impar

  entradas:
    10 numeros
  saidas:
    positivo ou negativo
    par ou impar
  processamento:

*/
#include <math.h>
#include <stdio.h>

void processamento(float x) {
  if (x < 0) {
    printf("O numero e negativo \n");
    printf("O numero nao e par nem impar \n");
  } else if (x > 0) {
    printf("O numero e positivo \n");
    if (floor(x) == (float)x) {
      // printf("inteiro \n");
      if ((int)x % 2 == 0) {
        printf("O numero e par\n");
      } else {
        printf("O numero e impar\n");
      }
    } else {
      printf("O numero nao e inteiro, portanto nem par nem impar \n");
    }

  } else {
    printf("O numero e zero \n");
    printf("Nem negativo, nem positivo \n");
    printf("Nem par nem impar \n");
  }
}

int main() {
  int i;
  float user;
  for (i = 0; i < 10; i++) {
    printf("\nDigite um numero >>> ");
    scanf("%f", &user);
    processamento(user);
  }
  return 0;
}