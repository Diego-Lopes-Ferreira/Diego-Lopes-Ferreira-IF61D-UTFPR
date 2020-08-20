/*
Calcular o salário final de um trabalhador, recebendo a quantidade de horas trabalhadas, a
quantidade de horas extras, quantidade de horas ausentes e o valor do salário mínimo, sabendo que:
  a)as horas trabalhadas e ausentes valem 4% do salário mínimo;
  b)as horas extras valem 50% a mais do que as horas trabalhadas;
  c)o salário final é igual a soma das horas trabalhadas com as hora extras, descontadas as horas
  ausentes e 11% de INSS.


  entradas:
    horas trabalhadas, ausentes e extras
    valor do salario
  saidas:
    salario final
  processamento:
    salarioFinal = 
      + horasTrabalhadas*valorDaHoraTrabalhada
      + horasExtras*valorDaHoraExtra
      - horasAusentes*valorDaHoraTrabalhada
      + 11% de INSS
*/
#include <stdio.h>

int main () {
  char nome[256];
  float salarioFinal = 0, horasTrabalhadas = 0, horasExtras = 0, horasAusentes = 0, salarioMin = 0;
  float valorDaHoraTrabalhada = 0, valorDaHoraExtra = 0;

  printf("Qual o salario minimo? \n>>> ");
  scanf("%f", &salarioMin);
  
  valorDaHoraTrabalhada = 0.04 * salarioMin;
  valorDaHoraExtra = valorDaHoraTrabalhada * 2;

  printf("Qual o nome do funcionario(a) \n>>> ");
  fflush(stdin);
  gets(nome);
  printf("Digite quantas horas foram trabalhadas (horas normais/horas extras) \n(00/00)>>> ");
  scanf("%f/%f", &horasTrabalhadas, &horasExtras);
  printf("Digite quantas horas sao ausentes \n>>> ");
  scanf("%f", &horasAusentes);

  salarioFinal = (horasTrabalhadas*valorDaHoraTrabalhada + horasExtras*valorDaHoraExtra - horasAusentes*valorDaHoraTrabalhada) * 1.11;

  printf("\nO salario do(a) %s e de R$ %.2f \n", nome, salarioFinal);
  return 0;
}