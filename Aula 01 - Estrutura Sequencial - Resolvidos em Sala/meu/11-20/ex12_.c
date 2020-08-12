/*

  Escreva um programa em linguagem C que leia um número inteiro digitado pelo usuário.

  entradas:
    numero
  saidas:
    numero
  processamento:
    Perguntar pro usuário
    Atribuir para uma variavel
    voltar para o usuario o que ele digitou
*/
#include <stdio.h>

int main () {
	int n1;
	
  printf("Digite um numero: ");
	scanf("%d", &n1);
	
  printf("Voce digitou %d ;)", n1);
  
  return 0;
}