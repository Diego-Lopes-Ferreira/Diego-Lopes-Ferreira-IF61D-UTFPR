/*
  Escreva um programa que receba três números inteiros distintos e mostre o
  maior.

  entradas:
    n1, n2, n3
  saidas:
    maior
  processamento:
    se n1 > n2:
      se n1 > n3:
        maior = n1
      senao:
        maior = n3
    senao:
      se n2 > n3
        maior = n2
*/
#include <stdio.h>

int main() {
  float n1 = 0, n2 = 0, n3 = 0;

  printf("Digite o numero 1 >>> ");
  scanf("%f", &n1);
  printf("Digite o numero 2 >>> ");
  scanf("%f", &n2);
  printf("Digite o numero 3 >>> ");
  scanf("%f", &n3);

  if ((n1 == n2) && (n2 == n3)) {
    printf("Os numeros sao iguais \n");
  } else {
    if (n1 > n2) {
      if (n1 > n3) {
        printf("O maior e o %.2f \n", n1);
      } else {
        printf("O maior e o %.2f \n", n3);
      }
    } else {
      printf("O maior e o %.2f \n", n2);
    }
  }
  return 0;
}