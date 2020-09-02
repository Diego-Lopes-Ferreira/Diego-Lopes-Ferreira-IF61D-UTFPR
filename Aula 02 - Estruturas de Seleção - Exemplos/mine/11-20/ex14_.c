/*

  Elabore um programa que recebe a idade de um nadador. O programa deve classificar o nadador em
  uma das categorias a seguir:
    a) Infantil A = de 5 a 7 anos
    b) Infantil B = de 8 a 10 anos
    c) Juvenil A = de 11 a 13 anos
    d) Juvenil B = de 14 a 17 anos
    e) Sênior = maiores de 18 anos


  entradas:
    idade
  saidas:
    categorias
  processamento:
    se idade < 18
      categoria: Sênior
    senao, se 14 < idade < 17
      categoria: Juvenil B
    senao, se 11 < idade < 13
      categoria: Juvenil A
    senao, se 8  < idade < 10
      categoria: Infantil B
    senao, se 5  < idade < 7
      categoria: Infantil A
*/
#include <stdio.h>

int main () {
  int idade;

  printf("Digite a idade do atleta \n>>> ");
  scanf("%d", &idade);

  if (idade >= 18)
    printf("Categoria: Senior \n");
  else if (idade >= 14)
    printf("Categoria: Juvenil B \n");
  else if (idade >= 11)
    printf("Categoria: Juvenil A \n");
  else if (idade >= 8)
    printf("Categoria: Infantil B \n");
  else if (idade >= 5)
    printf("Categoria: Infantil A \n");
  else
    printf("Categoria: ERRO \n");

  return 0;
}