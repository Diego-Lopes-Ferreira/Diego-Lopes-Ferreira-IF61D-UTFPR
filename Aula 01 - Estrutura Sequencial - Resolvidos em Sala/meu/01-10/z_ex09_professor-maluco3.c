/*
Escreva um programa em linguagem C que contenha a declaração de uma variável do tipo char
chamada letra. Declare também outra variável do tipo char chamada letra_a atribuindo-lhe o valor
'a'
*/
#include <stdio.h>

int main () {
  char letra[1];
  char letra_a[1] = "a";
  printf("letra vale: %s \n", letra);
  printf("letra_a vale: %s \n", letra_a);
  return 0;
}