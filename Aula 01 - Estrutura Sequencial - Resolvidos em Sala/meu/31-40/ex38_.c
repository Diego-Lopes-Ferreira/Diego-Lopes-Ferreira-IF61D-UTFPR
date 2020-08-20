/*
Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para calcular seu
rendimento, ela deverá fornecer o valor constante da aplicação mensal, a taxa e o número de meses.
Sabendo-se que a fórmula usada para este cálculo é: valor acumulado = (p * (1 + i)n) / i, onde i = taxa, p =
aplicação mensal, n = número de meses.


  entradas:
    valor constante da aplicação mensal, a taxa e o número de meses
  saidas:
    rendimento
  processamento:
    acumulado = aplicacao * pow((1 + taxa), nDeMeses)
    rendimento = acumulado - valorinicial
*/
#include <stdio.h>
#include <math.h>

int main () {
  float aplicacao, taxa, nDeMeses;
  float acumulado, rendimento;

  printf("Digite o valor na conta atualmente (separado por \".\") \n>>> ");
  scanf("%f", &aplicacao);
  
  printf("Digite a taxa em porcentagem (separado por \".\") \n>>> ");
  scanf("%f", &taxa);
  
  printf("Digite quantos meses a aplicacao ficara rendendo \n(separado por \".\") \n>>> ");
  scanf("%f", &nDeMeses);

  acumulado = aplicacao * pow((1 + taxa/100.0), nDeMeses);
  rendimento = acumulado - aplicacao;

  printf("Isso vai te render R$ %.2f \n", rendimento);

  int showInfo;
  printf("\n\nWant to know more info?(y=1/n=0)>> ");
  scanf("%d", &showInfo);
  if(showInfo == 1) {
    printf("Valor taxa         : %.1f %% \n", taxa);
    printf("Valor n de meses   : %.0f meses \n", nDeMeses);
    printf("Valor aplicacao    : R$ %.2f \n", aplicacao);
    printf("Valor acumulado    : R$ %.2f \n", acumulado);
    printf("Valor rendimento   : R$ %.2f \n", rendimento);
  } else if(showInfo == 0) {
    printf("end \n");
  } else {
    printf("err \n");
  }
  
  return 0;
}