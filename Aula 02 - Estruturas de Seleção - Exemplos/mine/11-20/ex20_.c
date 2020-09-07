/*
  Escreva um programa em linguagem C que contenha a declaracao de uma variavel
  do tipo int chamada numero.

  Peca entao para a pessoa informar por meio do teclado um valor para esta
  variavel.

  Se o valor for menor que 0 exiba a seguinte mensagem “O numero digitado
  (numero) e menor que 0.”.

  Caso contrario exiba a mensagem “O numero digitado (numero) e maior ou igual a
  0.”.

  O trecho (numero) se refere ao valor da variavel numero.

  entradas:
    numero
  saidas:
    mensagem
  processamento:
    se n < 0:
      O numero digitado (numero) e menor que 0.
    senao, se n >= 0:
      O numero digitado (numero) e maior ou igual a 0.
*/
#include <stdio.h>

int main() {
  int numero;
  printf("Digite um numero \n>>> ");
  scanf("%d", &numero);

  if (numero < 0)
    printf("O numero %d e menor que 0.\n", numero);
  else
    printf("O numero %d e maior ou igual a 0.\n", numero);

  return 0;
}