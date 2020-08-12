/*
Escreva um programa em linguagem C para calcular a raiz quadrada de um número inteiro qualquer
fornecido pela pessoa


  entradas:
    numero inteiro
  saidas:
    raiz quadrada desse numero
  processamento:
    perguntar x
    armazenar x numa variavel
    achar a raiz (elevar a 1/2)
    mostrar para o usuario  
*/
#include <stdio.h>
#include <math.h>

int main () {
  int x;
  float sqrtOfX;

  printf("Digite um numero inteiro \n>>> ");
  scanf("%d", &x);

  sqrtOfX = pow((float)x, (float)1/2);
  // alternativelly "sqrt(x);" would do the trick
  printf("A raiz de %d e %.2f \n", x, sqrtOfX);
  
  return 0;
}