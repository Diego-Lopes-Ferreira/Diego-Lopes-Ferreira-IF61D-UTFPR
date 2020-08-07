/*
Obter o nome e a idade de um usuário e escrever na tela a seguinte mensagem: Hello! FULANO, você tem XX anos!

  Entrada de dados:
    nome, idade

  Saida de dados:
    msg = "Hello, <NOME>!, voce tem <IDADE> anos"
  
  Processo:
    obter nome
    obter idade
    mostrar mensagem
*/
#include <stdio.h> //standard input and output
#include <locale.h> //acentuacao formato numerico
#include <stdlib.h> //

int main(){
  setlocale(LC_ALL, "Portuguese"); //Configur aa linguagem para UTF-8
  //variaveis
  int idade; //integer
  char nome[50]; //characteres / string

  //entrada de dados:
  printf("Digite seu nome  : "); //comando de saida / "uma constante literal"
  fflush(stdin); //fflush - limpar / stdin - standard input (limpa o buffer do teclado)
  gets(nome); //comando de entrada(variavel)
  printf("Digite sua idade : ");
  scanf("%d", &idade); //comando de entrada / duas partes: "tipo de dado (%s - string / %d - decimal / %i - integer)", &variavel

  //saida de dados
  printf("Hello, %s, você tem %i anos", nome, idade);

  return 0;
}
/*
da pra fazer assim:
int main(){  setlocale(LC_ALL, "Portuguese"); int idade; char nome[50]; printf("Digite seu nome  : "); fflush(stdin); gets(nome); printf("Digite sua idade : ");  scanf("%d", &idade); printf("Hello, %s, você tem %i anos", nome, idade);  return 0;}
*/
