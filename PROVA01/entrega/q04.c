/*

  Diego Lopes Ferreira
  RA: 2267241

  Escreva um programa que receba quatro notas de um aluno (float), calcule e
  mostre a média aritmética das notas e a mensagem de aprovado ou reprovado,
  considerando para aprovação média igual ou maior que 7.

  entradas:
    notas dos bimestres 1, 2, 3 e 4
  saidas:
    media e aprovacao
  processamento:
    ler as 4 notas
    calcular a media -> (bim1 + bim2 + bim3 + bim4) / 4
    se media >= 7:
      mostre que foi aprovado
    senao:
      mostre que foi reprovado
*/
#include <stdio.h>

int main() {
  float bim1 = 0, bim2 = 0, bim3 = 0, bim4 = 0, media = 0;

  printf("Digite as 4 notas \n");
  printf("Nota Bimestre 1>>> ");
  scanf("%f", &bim1);
  printf("Nota Bimestre 2>>> ");
  scanf("%f", &bim2);
  printf("Nota Bimestre 3>>> ");
  scanf("%f", &bim3);
  printf("Nota Bimestre 4>>> ");
  scanf("%f", &bim4);

  media = (bim1 + bim2 + bim3 + bim4) / 4;

  printf("\n\n");
  printf("|------------|-----------|\n");
  printf("| Bimestre 1 |     %04.1f  |\n", bim1);
  printf("| Bimestre 2 |     %04.1f  |\n", bim2);
  printf("| Bimestre 3 |     %04.1f  |\n", bim3);
  printf("| Bimestre 4 |     %04.1f  |\n", bim4);
  printf("|------------|-----------|\n");
  printf("| Media      |     %04.1f  |\n", media);
  printf("|------------|-----------|\n");

  if (media >= 7)
    printf("| Resultado  |  Aprovado | \n");
  else
    printf("| Resultado  | Reprovado | \n");
  printf("|------------|-----------|\n");

  return 0;
}