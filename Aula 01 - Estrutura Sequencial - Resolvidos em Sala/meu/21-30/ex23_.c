/*
Escreva um programa em linguagem C para calcular a operação de um número elevado a outro
(potência). A pessoa deve informar a base e o expoente que deverão ser números inteiros.


  entradas:
    reais base e expoente
  saidas:
    base ^ expoente
  processamento:
    perguntar a base
    armazenar a base numa variavel
    perguntar o expoente
    armazenar o expoente numa variavel
    calcular base ^ expoente
    colocar na tela
  
*/
#include <stdio.h>

int main () {
  float base, xp;
  float power;
  
  printf("Diga um numero para a base da exponenciacao \n>>> ");
  scanf("%f", &base);
  printf("Diga outro numero para ser o expoente \n>>> ");
  scanf("%f", &xp);

  power = pow(base, xp);

  printf("%.2f elevado a %.2f e igual a %.2f \n", base, xp, power);

  return 0;
}