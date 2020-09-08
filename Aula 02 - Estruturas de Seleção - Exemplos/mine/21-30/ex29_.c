/*
  Escreva um programa que receba quatro notas de um aluno (float), calcule e
  mostre a média aritmética das notas e a mensagem de aprovado ou reprovado,
  considerando para aprovação média igual ou maior que 7.


  entradas:
    bim1, bim2, bim3, bim4
  saidas:
    aprovacao ou nao
  processamento:
    calcular media (n1, n2, n3, n4):
      retorna (n1 + n2 + n3 + n4) / 4;

    ler as notas
    calcular media (bim1, bim2, bim3, bim4)
    se media >= 7:
      aprovado
    senao:
      reprovado
*/
#include <stdio.h>

float calcMedia(float n1, float n2, float n3, float n4) {
  return ((n1 + n2 + n3 + n4) / 4);
}

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

  media = calcMedia(bim1, bim2, bim3, bim4);

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