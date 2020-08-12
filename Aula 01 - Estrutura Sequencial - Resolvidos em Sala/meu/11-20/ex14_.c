/*
Escreva um programa em linguagem C que leia um número real digitado pelo usuário. 


  entradas:
  numero
  saidas:
  numero
  processamento:
  Perguntar pro usuário o n1
  Atribuir para uma variavel
  voltar para o usuario o que ele digitou
*/
#include <stdio.h>

int main () {
  float n1;
  printf("Digite um numero \n>>>");
  scanf("%f", &n1);

  printf("Voce digitou %.2f ;) \n", n1);
  
  return 0;
}