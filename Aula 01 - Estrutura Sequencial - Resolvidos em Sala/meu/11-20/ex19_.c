/*
Escreva um programa em linguagem C que pergunte para a pessoa informar dois números inteiros e
depois forneça o resultado da soma, subtração, multiplicação e divisão entre os números informados.
Mostre o resultado na tela de forma clara usando a formatação correta do comando printf. 


  entradas:
    inteiros x e y
  saidas:
    soma, subtração, multiplicação e divisão
  processamento:
    perguntar o x
    armazenar x numa variavel
    perguntar o y
    armazenar y numa variavel
    armazenar a soma numa variavel
    armazenar a subtracao numa variavel
    armazenar a multiplicacao numa variavel
    armazenar a divisao numa variavel
    mostrar tudo na tela
*/
#include <stdio.h>

int main () {
  int x, y;
  int sum, sub, product;
  float quo;

  printf("Diga um numero inteiro \n>>> ");
  scanf("%d", &x);
  printf("Diga outro numero inteiro \n>>> ");
  scanf("%d", &y);

  sum = x + y;
  sub = x - y;
  product = x * y;
  quo = (float)x / (float)y;

  printf("%d + %d = %d \n", x, y, sum);
  printf("%d - %d = %d \n", x, y, sub);
  printf("%d x %d = %d \n", x, y, product);
  printf("%d / %d = %.2f \n", x, y, quo);
  
  return 0;
}