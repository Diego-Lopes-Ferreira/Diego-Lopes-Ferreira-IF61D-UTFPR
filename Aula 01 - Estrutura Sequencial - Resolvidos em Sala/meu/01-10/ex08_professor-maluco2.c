/*
Escreva um programa em linguagem C que contenha a declaração de uma variável do tipo float
chamada número. Declare também outra variável do tipo float chamada x atribuindo-lhe o valor 100.25. 
*/
#include <stdio.h>

int main () {
  float numero;
  float x = 100.25;
  printf("Numero vale: %f \n", numero);
  printf("X vale: %f \n", x);
  printf("Editado: %.2f", x);
  return 0;
}