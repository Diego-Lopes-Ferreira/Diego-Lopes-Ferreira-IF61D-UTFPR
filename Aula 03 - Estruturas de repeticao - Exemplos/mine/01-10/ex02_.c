/*

  Calcular a média final obtida por um grupo de 22 alunos, para 4 notas
  bimestrais.

  entradas:
    22 notas de 4 bimestres (total 22 * 4)
  saidas:
    media final
  processamento:
    repetir 22 vezes:
      perguntar qual a nota do 1 bim
      perguntar qual a nota do 2 bim
      perguntar qual a nota do 3 bim
      perguntar qual a nota do 4 bim
      somar tudo
    ao final, dividir o valor da soma por (22 * 4)

*/
#include <stdio.h>

int main() {
  int i = 0, j = 0;
  float nota = 0, total = 0, mediaFinal;
  int nDeAlunos = 0, nDeSecoesDoAno = 0;

  /*
  printf("==== Notas dos Alunos ====\n");
  printf("Digite qual a quantidade de secoes do ano\n");
  printf("ex: 4 (bimestral), 2 (semestral)\n>>> ");
  scanf("%d", &nDeSecoesDoAno);

  printf("Digite o n de alunos da turma \n>>> ");
  scanf("%d", &nDeAlunos);
  */
  nDeAlunos = 22;
  nDeSecoesDoAno = 4;

  while (i < nDeAlunos) {
    i++;
    printf("Aluno %d \n", i);
    while (j < nDeSecoesDoAno) {
      printf("  Nota %d >>> ", (j + 1));
      scanf("%f", &nota);
      total += nota;
      j++;
    };
    j = 0;
  };
  mediaFinal = total / (float)(nDeAlunos * nDeSecoesDoAno);
  printf("Media final da turma: %5.2f \n", mediaFinal);

  return 0;
}