/*
Escreva um programa em linguagem C que pergunte para a pessoa informar dois números reais e
depois forneça o resultado da soma, subtração, multiplicação e divisão entre os números informados.
Mostre o resultado na tela de forma clara usando a formatação correta do comando printf. 


  entradas:
    dois reais: x e y
  saidas:
    soma, subtração, multiplicação e divisão de x com y
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
  float x, y;
  float sum, sub, product, quo;

  printf("Diga um numero \n(xx.xx)>>> ");
  scanf("%f", &x);
  printf("Diga outro numero \n(xx.xx)>>> ");
  scanf("%f", &y);

  sum = x + y;
  sub = x - y;
  product = x * y;
  quo = x / y;

  printf("%.2f + %.2f = %.2f \n", x, y, sum);
  printf("%.2f - %.2f = %.2f \n", x, y, sub);
  printf("%.2f x %.2f = %.2f \n", x, y, product);
  printf("%.2f / %.2f = %.2f \n", x, y, quo);

  int showInfo;
  printf("\n\nWant to see all decimal cases?(y=1/n=0)>> ");
  scanf("%d", &showInfo);
  if(showInfo == 1) {
    printf("%f + %f = %f \n", x, y, sum);
    printf("%f - %f = %f \n", x, y, sub);
    printf("%f x %f = %f \n", x, y, product);
    printf("%f / %f = %f \n", x, y, quo);
  } else if(showInfo == 0) {
    printf("end \n");
  } else {
    printf("err \n");
  }
  return 0;
}