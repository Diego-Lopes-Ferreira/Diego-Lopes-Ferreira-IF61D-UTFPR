/*
  Escreva um programa em linguagem C que contenha a declaração de uma variável
  do tipo char chamada sexo. Peça então para a pessoa informar por meio do
  teclado um valor para esta variável. Se o valor for igual a ‘M’ exiba a
  seguinte mensagem “Sexo: Masculino”. Se o valor for igual a ‘F’ exiba a
  seguinte mensagem “Sexo: Feminino”. Se for outro valor qualquer exiba a
  seguinte mensagem “Sexo: Inválido!”.


  entradas:
    char sexo
  saidas:
    frase
  processamento:
    se sexo.lower() == 'm':
      "Sexo: Masculino"
    senao:
      "Sexo: Feminino"
*/
#include <stdio.h>
#include <string.h>

int main() {
  char sexo[2];

  printf("Digite o sexo \n[m/f]>>> ");
  fflush(stdin);
  gets(sexo);
  if (strcmp(strlwr(sexo), "m") == 0)
    printf("Sexo: Masculino \n");
  else if (strcmp(strlwr(sexo), "f") == 0)
    printf("Sexo: Feminino \n");
  else
    printf("Sexo: alien \n");

  return 0;
}