/*
  Escreva um programa em linguagem C que contenha a declaração de duas variaveis
  do tipo int chamadas a e b.

  Peça então para a pessoa informar por meio do teclado um valor para estas
  variaveis.

  Se o valor de a for igual ao valor de b exiba a seguinte mensagem “O valor da
  variavel a e igual ao valor da variavel b.”;

  caso contrario exiba a mensagem “O valor da variavel a não e igual ao valor da
  variavel b”.


  entradas:
    inteiros a e b
  saidas:
    frase
  processamento:
    se a == b:
      mostre("O valor da ... e igual ... variavel b.");
    senao:
      mostre("O valor da ... não e igual ... variavel b.");
*/
#include <stdio.h>

int main() {
  int a, b;

  printf("Digite um valor inteiro A \n>>> ");
  scanf("%d", &a);

  printf("Digite um valor inteiro B \n>>> ");
  scanf("%d", &b);

  if (a == b)
    printf("O valor da variavel A e igual ao valor da variavel B. \n");
  else
    printf("O valor da variavel A nao e igual ao valor da variavel B. \n");

  return 0;
}