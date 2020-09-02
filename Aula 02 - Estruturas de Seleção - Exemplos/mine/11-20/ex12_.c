/*
  Criar um programa que calcule o Salário Líquido, os Descontos e os Acréscimos de um funcionário:
  
  Descontos:
  - IR: para Salário Bruto:
    - até R$900,00 Isento
    - de R$900,01 até R$3.000,00 3%
    - de R$3.000,01 até R$4.000,00 5%
    - acima de R$4.000,00 7%.
  - Faltas: 3% por falta.
  - Plano de Saúde: 6%.
  
  Acréscimos:
  - Abono: 25 % do Salário Bruto + R$130,00, o valor do abono não pode ser maior que R$1.000,00.
  - Vale-Alimentação: 12 %.
  - Salário Família: R$25,00 por dependente.

  - O Salário Líquido será igual ao Salário Bruto – Descontos + Acréscimos.
  - Salário Bruto, número de faltas e quantidade de dependentes deverão ser lidos.
  - Todas as porcentagens serão calculadas sobre o Salário Bruto.
  - O programa deverá informar o total dos acréscimos, o total dos descontos e o salário líquido


  entradas:
    Salário Bruto, número de faltas e quantidade de dependentes
  saidas:
    total dos acréscimos, o total dos descontos e o salário líquido
  processamento:
  
*/
#include <stdio.h>

int calculaIR(float salario) {
  if (salario <= 900)
    return 0;
  else if (salario <= 3000)
    return salario * 0.03;
  else if (salario <= 4000)
    return salario * 0.05;
  else
    return salario * 0.07;
}

int calculaAbono(float salario) {
  // Abono: 25 % do Salário Bruto + R$130,00, o valor do abono não pode ser maior que R$1.000,00.
  float abono;
  abono = salario * 0.25 + 130;
  if (abono > 1000)
    abono = 1000;
  return abono;
}

int main() {
  int nDeFaltas=0, dependentes=0;
  float salarioLiquido=0, salarioBruto=0;
  float acressimos=0, abono=0, valeAlimentacao=0, familia=0;
  float descontos=0, IR=0, faltas=0, planoSaude=0;

  printf("Digite o salario bruto do funcionario \n>>>");
  scanf("%f", &salarioBruto);
  printf("Digite a quantidade de faltas do funcionario \n>>>");
  scanf("%d", &faltas);
  printf("Digite o n de dependentes do funcionario \n>>>");
  scanf("%d", &dependentes);
  printf("\n\n");
  
  abono = calculaAbono(salarioBruto);
  valeAlimentacao = salarioBruto * 0.12;
  familia = dependentes * 25;
  acressimos = abono + valeAlimentacao + familia;

  IR = calculaIR(salarioBruto);
  faltas = 0.03 * salarioBruto * faltas;
  planoSaude = 0.06 * salarioBruto;
  descontos = IR + faltas + planoSaude;

  salarioLiquido = salarioBruto + acressimos - descontos;

  printf("Salario liquido     : %.2f \n", salarioLiquido);
  printf("===================== \n");
  printf("Salario bruto : %.2f \n", salarioBruto);
  printf("  Acressimos  : %.2f \n", acressimos);
  printf("    abono           : %.2f \n", abono);
  printf("    vale alimentacao: %.2f \n", valeAlimentacao);
  printf("    salario familia : %.2f \n", familia);
  printf("  Descontos   : %.2f \n", descontos);
  printf("    IR         : %.2f \n", IR);
  printf("    Faltas     : %.2f \n", faltas);
  printf("    Plano Saude: %.2f \n", planoSaude);
  return 0;
}