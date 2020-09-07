/*
  Escreva um programa que imprime na tela a situação do aluno após a sua nota ser digitada. Baseie-se
  na tabela abaixo:
    a) Nota: de 1 a 2 – Situação: nota péssima
    b) Nota: de 3 a 4 – Situação: nota ruim
    c) Nota: de 5 a 6 – Situação: nota razoável
    d) Nota: 7 – Situação: nota boa
    e) Nota: de 8 a 9 – Situação: nota muito boa
    f) Nota: 10 – Situação: nota ótima

  entradas:
    nota
  saidas:
    classificacao
  processamento:
    Ler a nota do teclado
    se nota < 1:
      invalido
    senao, se nota < 2:
      nota pessima
    senao, se nota < 4:
      nota ruim
    senao, se nota < 6:
      razoavel
    senao, se nota == 7:
      nota boa
    senao, se nota < 9:
      not muito boa
    senao, se nota < 10:
      nota excelente
    senao:
      invalido
*/
#include <stdio.h>

int main()
{
  float nota;

  printf("Digite a nota \n>>> ");
  scanf("%f", &nota);

  if (nota < 1)
    printf("Invalido? Nao especifica no enunciado :) \n");
  else if (nota <= 2)
    printf("Nota: Pessima \n");
  else if (nota <= 4)
    printf("Nota: ruim \n");
  else if (nota <= 6)
    printf("Nota: razoavel \n");
  else if (nota == 7)
    printf("Nota: boa \n");
  else if (nota <= 9)
    printf("Nota: muito boa \n");
  else if (nota <= 10)
    printf("Nota: excelente \n");
  else
    printf("Invalido \n");

  return 0;
}