/*

  Escreva um programa em linguagem C que leia um número inteiro digitado pelo usuário.

  entradas:
    numero
  saidas:
    numero
  processamento:
    Perguntar pro usuário
    Atribuir para o 
*/
#include <stdio.h>

int main () {
	int N1, N2, SOMA;
	
  printf("Digite o primeiro número: ");
	scanf("%d", N1);
	
  printf("Digite o segundo número: ");
	scanf("%d", N2);
	
  SOMA = N1 + N2;
	
  printf("A soma é: ");
	printf(SOMA);
  
  return 0;
}