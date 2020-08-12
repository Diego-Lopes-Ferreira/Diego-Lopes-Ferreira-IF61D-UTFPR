/*

  Escreva um programa em linguagem C que leia  dois números inteiros digitados pelo usuário.

  entradas:
    numero1
    numero2
  saidas:
    numero1
    numero2
  processamento:
    Perguntar pro usuário o n1
    Atribuir para uma variavel
    Perguntar pro usuário o n2
    Atribuir para outra variavel
    voltar para o usuario o que ele digitou
*/
#include <stdio.h>

int main () {
	int n1, n2;
	
  printf("Digite um numero: \n>>>");
	scanf("%d", &n1);
  printf("Digite outro numero: \n>>>");
	scanf("%d", &n2);
	
  printf("Voce digitou %d e %d ;)", n1, n2);
  
  return 0;
}