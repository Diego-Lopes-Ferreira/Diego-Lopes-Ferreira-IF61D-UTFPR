/*
Escreva um programa em linguagem C que declare 3 variáveis (dos tipos int, float e char).
Depois coloque um valor em cada uma delas e exiba o seu conteúdo na tela. 


  entradas:
    inteiro a
    real b
    caracter c
  saidas:
    as tres variaveis
  processamento:
    delarar as variaveis
    mostrar na tela
  
*/
#include <stdio.h>
#include <string.h>

int main () {
  int a;
  a = 1;
  float b;
  b = 1.0;
  char c[256];
  strcpy(c, "sera que foi?");
  printf("A = %d | B = %f | C = %s \n", a, b, c);  
  return 0;
}
