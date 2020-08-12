/*
Escreva um programa em linguagem C que pergunte para a pessoa informar dois números inteiros e
depois forneça o resultado da divisão e o seu resto. 


  entradas:
    inteiros x e y
  saidas:
    divisao e resto de x por y
  processamento:
    perguntar x
    armazenar x numa variavel
    perguntar y
    armazenar y numa variavel
    fazer a divisao e colocar numa variavel
    achar o resto e colocar numa variavel
    mostrar para o usuario
  
*/
#include <stdio.h>

int main () {
  int x, y;
  int quo, mod;
  
  printf("Diga um numero inteiro \n>>> ");
  scanf("%d", &x);
  printf("Diga outro numero inteiro \n>>> ");
  scanf("%d", &y);

  quo = x / y;
  mod = x % y;

  printf("%d / %d e %d e sobra %d \n", x, y, quo, mod);

  
  return 0;
}