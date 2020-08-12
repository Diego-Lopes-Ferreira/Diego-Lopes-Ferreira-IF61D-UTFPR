/*
Escreva um programa em linguagem C que contenha a declaração de uma variável do tipo int
chamada a, uma variável chamada b do tipo float e uma variável do tipo char chamada c. Usando o
operador de atribuição, escreva uma instrução para atribuir um valor qualquer para cada uma delas. 


  entradas:
  -

  saidas:
  inteiro a
  real b
  caracter c
  processamento:
  -
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int a;
  a = 1;
  float b;
  b = 1.0;
  char c[256] = "Diego";
  printf("A = %d | B = %f | C = %s \n", a, b, c);
  return 0;
}