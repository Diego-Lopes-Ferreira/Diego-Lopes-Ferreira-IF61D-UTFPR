/*
1. Obter o nome e a idade de um usuário e escrever na tela a 
seguinte mensagem: Hello! FULANO, você tem XX anos!

1 - entradas de dados
  nome
  idade
2 - saídas de dados
  imprimir a frase --> Hello! FULANO, você tem XX anos!
3 - processamento
  obter o nome da pessoa
  obter a idade da pessoa
  escreva a frase, substitundo FULANO pelo nome e XX pela idade
4 - fórmula
  não há  
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	char nome[50];
	printf("Digite seu nome: ");
//scanf que lê string até o primeiro espaço
//	scanf("%s",&nome);
//scanf formatado que lê string com espaços
//	scanf("%[^\n]s",&nome);
  fflush(stdin); //limpa o buffer de teclado. SEMPRE ANTES DE LER string
//gets que lê string com espaços
	gets(nome);
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	printf("\nHello! %s, você tem %d anos!\n\n",nome,idade);	
	system("pause");
  return 0;	
}