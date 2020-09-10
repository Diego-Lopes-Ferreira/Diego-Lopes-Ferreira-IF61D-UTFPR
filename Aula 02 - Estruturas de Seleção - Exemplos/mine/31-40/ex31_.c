/*
  Escreva um programa que receba dois números inteiros e mostre o menor.



  entradas:
    n1, n2
  saidas:
    maior
  processamento:
    se n1 > n2:
      maior = n1
    senao:
      maior = n2
    mostrar(maior)
*/
#include <stdio.h>

int main() {
  float n1 = 0, n2 = 0;

  printf("Digite um numero \n>>> ");
  scanf("%f", &n1);
  printf("Digite outro numero \n>>> ");
  scanf("%f", &n2);

  if (n1 == n2)
    printf("Os numeros sao iguais \n");
  else if (n1 > n2)
    printf("O maior numero e: %.2f \n", n1);
  else
    printf("O maior numero e: %.2f \n", n2);

  return 0;
}