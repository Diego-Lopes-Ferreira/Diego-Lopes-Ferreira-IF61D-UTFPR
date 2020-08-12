/*
  Escreva um programa em linguagem C que leia um simples caractere digitado pelo usuário.

  entradas:
    um caracter
  saidas:
    qual caracter o usuario digitou
  processamento:
    imprimir na tela um texto
    limpar a memoria buffer (fflush)
    ler o que o usuario digitou
    voltar a informacao pra ele
  
*/
#include <stdio.h>

int main () {
  char texto[256];
  printf("Digite um caracter \n>>> ");
  fflush(stdin);
  gets(texto);
  printf("Voce digitou \"%s\" ;) \n", texto);

  
  return 0;
}