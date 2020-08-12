/*
Escreva um programa em linguagem C que mostre na tela o seguinte texto: Aula de Programação em C.


  entradas:
    -
  saidas:
    "Aula de Programaçãoem C"
  processamento:
    colocar a mensagem na tela
*/
#include <stdio.h>
#include <locale.h>

int main () {
  setlocale(LC_ALL, "Portuguese");
  printf("Aula de Programação em C.\n");
  return 0;
}