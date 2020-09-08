/*
   Escreva um programa que receba duas notas de um aluno (float), calcule e
  mostre a média aritmética e a mensagem que se encontra na tabela a seguir. A
  bolinha preta significa inclusive

  entradas:
    nota1, nota2
  saidas:
    classificacao
  processamento:
    ler as notas
    fazer a media
    se nota < 3:
      reprovado
    senao, se nota < 7:
      exame
    senao, se nota <=10:
      aprovado
*/
#include <stdio.h>

int main() {
  float n1 = 0, n2 = 0, media = 0;

  printf("Digite as notas do aluno \n");
  printf("Nota 1 >>> ");
  scanf("%f", &n1);
  printf("Nota 2 >>> ");
  scanf("%f", &n2);

  media = (n1 + n2) / 2;

  printf("\n\n\n");

  printf("|------------|-----------|\n");
  printf("| Bimestre 1 |     %04.1f  |\n", n1);
  printf("| Bimestre 2 |     %04.1f  |\n", n2);
  printf("|------------|-----------|\n");
  printf("| Media      |     %04.1f  |\n", media);
  printf("|------------|-----------|\n");

  if (media < 0)
    printf("Erro \n");
  else if (media < 3)
    printf("| Resultado  | Reprovado | \n");
  else if (media < 7)
    printf("| Resultado  |   Exame   | \n");
  else if (media <= 10)
    printf("| Resultado  |  Aprovado | \n");
  else
    printf("Erro \n");
  printf("|------------|-----------|\n");

  return 0;
}