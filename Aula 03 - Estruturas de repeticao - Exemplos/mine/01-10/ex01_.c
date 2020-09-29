/*

  Obter o nome e a idade de um usuário e escrever na tela a seguinte mensagem:
  "Hello! FULANO, voce tem XX anos"
  para um grupo de 10 pessoas.


  entradas:
    10 nomes
  saidas:
    frase
  processamento:
    repetir 10 vezes:
      perguntar nome
      perguntar idade
      mostrar frase formatada com as informacoes
*/
#include <stdio.h>

int main() {
  char nome[10][256];
  int idade[10], nDePessoas = 2;

  int i = 0;
  while (i < nDePessoas) {
    printf("Usuario %02d \n", (i + 1));
    printf("  Digite o nome  >>> ");
    fflush(stdin);
    gets(nome[i]);
    // printf("%s \n", nome[i]);
    printf("  Digite a idade >>> ");
    scanf("%d", &idade[i]);
    // printf("idade %d \n", idade[i]);
    printf("--- \n");
    i++;
  }
  i = 0;
  while (i < nDePessoas) {
    printf("Hello! %s, voce tem %02d anos \n", nome[i], idade[i]);
    i++;
  }

  return 0;
}