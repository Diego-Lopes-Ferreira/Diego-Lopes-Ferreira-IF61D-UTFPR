/*
Escreva um programa para calcular e exibir o valor de uma prestação em atraso:
prestacao_atrasada <- prestacao + (prestacao*(taxa/100)*num_dias_atraso)
a) taxa é o percentual de juros por dia
b) num_dias_atraso é o número de dias em atraso
c) prestação é o valor da prestação normal.
O valor da prestação, a taxa e o número de dias em atraso devem ser fornecidos pelo usuário.


  entradas:
    Valor da prestacao
    taxa
    n de dias em atraso
  saidas:
    valor da prestacao com o atraso
  processamento:
    prestacao_atrasada = prestacao + (prestacao*(taxa*0.01)*num_dias_atraso)
  
*/
#include <stdio.h>

int main () {
  float prestacao, taxa, nDeDias, prestacaoAtrasada;

  printf("Digite a qual o valor da prestacao \n>>> ");
  scanf("%f", &prestacao);
  printf("Digite a qual a taxa (em porcentagem) \n>>> ");
  scanf("%f", &taxa);
  printf("Digite quantos dias a prestacao esta atrasada \n>>> ");
  scanf("%f", &nDeDias);

  prestacaoAtrasada = prestacao + (prestacao * 0.01 * taxa * nDeDias);

  printf("Voce devera pagar: R$ %.2f \n", prestacaoAtrasada);
  return 0;
}