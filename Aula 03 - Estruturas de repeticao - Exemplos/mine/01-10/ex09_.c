/*

  Refazer o exercício nº 01, obtendo o sexo do usuário (masculino ou feminino)

    ex 1: Obter o nome e a idade de um usuário e escrever na tela a seguinte
  mensagem: "Hello! FULANO, voce tem XX anos" para um grupo de 10 pessoas.

  e alterar a mensagem para:
    "Hello! Sr. Fulano, você ainda não atingiu a maioridade!"
    ou
    "Hello! Sra. Ciclana, você ainda não atingiu a maioridade!"

  entradas:
    nome, preferencia, idade;
  saidas:
    frase formatada;
  processamento:
    se preferencia == 1:
      se idade >= 18:
        mostre "Hello! Sr. <Fulano>, você ja atingiu a maioridade!"
      senao:
        mostre "Hello! Sr. <Fulano>, você ainda nao atingiu a maioridade!"
    senao
      se idade >= 18:
        mostre "Hello! Sra. <Fulana>, você ja atingiu a maioridade!"
      senao:
        mostre "Hello! Sra. <Fulana>, você ainda nao atingiu a maioridade!"
*/
#include <stdio.h>
#include <string.h>

int pergunte() {
  char user[4];
  fflush(stdin);
  gets(user);
  return (strcmp(strlwr(user), "sr") == 1);
}

int main() {
  char nome[256];
  int idade = 0, i = 0, nDePessoas = 2;

  for (i = 0; i < nDePessoas; i++) {
    printf("Digite seu nome \n>>> ");
    fflush(stdin);
    gets(nome);

    printf("Digite sua idade \n>>> ");
    scanf("%d", &idade);

    printf("Digite sua preferencia \n['Sr'/'Sra']>>> ");
    if (pergunte() == 0) {
      printf("Sr \n");
      if (idade >= 18) {
        printf("Hello! Sr. %s, voce ja atingiu a maioridade! \n", nome);
      } else {
        printf("Hello! Sr. %s, voce ainda nao atingiu a maioridade! \n", nome);
      }
    } else {
      printf("Sra \n");
      if (idade >= 18) {
        printf("Hello! Sra. %s, voce ja atingiu a maioridade! \n", nome);
      } else {
        printf("Hello! Sra. %s, voce ainda nao atingiu a maioridade! \n", nome);
      }
    }
  }

  return 0;
}