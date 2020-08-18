/*
Ler um número inteiro representando a quantidade de alunos de uma turma e informe a
quantidade de grupos de 4 alunos que podem ser formados, e quantos alunos ficam de fora, sem formar
um grupo completo



  entradas:
    alunos
  saidas:
    grupos e alunos sem grupo
  processamento:
    grupos = alunos / 4
    alunos sem grupo = alunos % 4
  
*/
#include <stdio.h>

int main () {
  int alunos, alunosSemGrupo, grupos, tamanhoDoGrupo;
  tamanhoDoGrupo = 4;

  printf("Quantos alunos tem na sala? \n>>> ");
  scanf("%d", &alunos);

  grupos = alunos / tamanhoDoGrupo;
  alunosSemGrupo = alunos % tamanhoDoGrupo;

  printf("Serao montados %d grupos e %d alunos ficarao de fora \n", grupos, alunosSemGrupo);
  
  return 0;
}