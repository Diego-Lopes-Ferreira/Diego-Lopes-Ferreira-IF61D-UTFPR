/*
1. Obter o nome e a idade de um usuário e escrever na tela a seguinte mensagem: 
Hello! FULANO, você tem XX anos!

entradas de dados: nome, idade
saída de dados: Hello! FULANO, você tem XX anos!
processamento: não há

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL,"Portuguese");
  
  char nome[50];
  int idade;
  
  printf("Digite o nome da pessoa: ");
  fflush(stdin);
	gets(nome);
  printf("Digite a idade da pessoa: ");
  scanf("%d",&idade);
  
	printf("\nHello! %s, você tem %d anos!\n",nome,idade);
	
	system("pause");
		
	return 0;
}