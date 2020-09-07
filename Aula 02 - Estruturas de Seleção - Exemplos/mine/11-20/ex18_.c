/*

   Escrever um programa para calcular, a partir do valor do salário bruto e da
quantidade de dependentes, o valor: a) do Imposto de Renda => { Salário bruto
menos o valor dedutível por dependente legal; desconto de 11% de INSS; Em
números, isso representa: R$ 2.500 - R$ 275 (11% de INSS) - R$ 179,71 (desconto
do dependente) = R$ 2.045,29 (base de cálculo).
    }
O empregado deve multiplicar a base de cálculo por 7,5 (alíquota de IR) e
dividir por 100. Sobre o resultado, subtrair os R$134,08 (dedução estabelecida
para salários entre R$1.787,78 a R$2.679,29). O resultado final será o valor do
IR a ser descontado mensalmente: R$19,32. b) do INSS c) do Salário Líquido

  entradas:
    salario bruto e n de dependentes
  saidas:
    Imposto de Renda => salario bruto - INSS - desconto por dependentes => regra
de tabela INSS - regra de tabela Salario Liquido => salario bruto - IR - INSS -
desconto por dependente processamento: perguntar qual o salario bruto perguntar
o n de dependentes

    calcula Desconto Por Dependente (n de dependentes)
      retorna (n de dependente * 179.71);

    calcula INSS (salario bruto):
      se salario <= 1317.07:
      retorna salario * 0.08;
    senao, se salario <= 2195.12:
      retorna salario * 0.09;
    senao, se salario <= 4390.24:
      retorna salario * 0.11;
    senao:
      retorna 482.93; // 4390.24 * 0.11

    calcula IR (salario bruto, INSS, desconto por dependente):
      se salario < 1787.77:
        retorna 0;
      senao, se salario < 2679.29:
        retorna (salario * 0.075) + 134.08;
      senao, se salario < 3572.43:
        retorna (salario * 0.15) + 335.03;
      senao, se salario < 4463.81:
        retorna (salario * 0.225) + 602.96;
      senao:
        retorna (salario * 0.275) + 826.15;

    calcula salario liquido (salario bruto, INSS, IR e desconto por dependente)
      a
*/
#include <stdio.h>
#include <string.h>

int pergunte(char pergunta[256]) {
  char user[4];
  printf("%s \n[nao / sim]>>>", pergunta);
  fflush(stdin);
  gets(user);
  // printf("%s \n", user);
  return (strcmp(strlwr(user), "sim") == 0);
}

float calculaIR(float salario, float INSS, float descDependente) {
  float salarioUtil;
  salarioUtil = salario - INSS - descDependente;
  if (salario <= 1787.77)
    return 0;
  else if (salario <= 2679.29)
    return ((salario * 0.075) + 134.08);
  else if (salario <= 3572.43)
    return ((salario * 0.15) + 335.03);
  else if (salario <= 4463.81)
    return ((salario * 0.225) + 602.96);
  else
    return ((salario * 0.275) + 826.15);
}

float calculaINSS(float salario) {
  if (salario <= 1317.07)
    return salario * 0.08;
  else if (salario <= 2195.12)
    return salario * 0.09;
  else if (salario <= 4390.24)
    return salario * 0.11;
  else
    return 482.93;  // 4390.24 * 0.11
}

float calculaDescontoPorDependente(float dependentes) {
  return (dependentes * 179.71);
}

float calculaLiquido(float salario, float INSS, float IR, float descDependent) {
  float salarioFinal;
  salarioFinal = salario - INSS - IR - descDependent;
  return salarioFinal;
}

int main() {
  float salarioBruto, nDeDependentes;
  float salarioFinal, INSS, IR, descDependente;
  // Ler o salario
  printf("Calculo de salario \n");
  printf("Digite o salario bruto do funcionario \n>>> ");
  scanf("%f", &salarioBruto);

  // Ver a quantidade de dependentes
  printf("Digite o numero de dependentes da pessoa \n>>> ");
  scanf("%f", &nDeDependentes);

  // Calculo do INSS
  INSS = calculaINSS(salarioBruto);

  // Calculo do desconto por dependente
  descDependente = calculaDescontoPorDependente(nDeDependentes);

  // Calculo do Imposto de Renda
  IR = calculaIR(salarioBruto, INSS, descDependente);

  // Calcula salario liquido
  salarioFinal = calculaLiquido(salarioBruto, INSS, IR, descDependente);

  printf("Salario final           : %.2f \n", salarioFinal);
  printf("INSS                    : %.2f \n", INSS);
  printf("Desconto por dependente : %.2f \n", descDependente);
  printf("Imposto de Renda        : %.2f \n", IR);
  // printf("Salario Bruto           : %.2f \n", salarioBruto);
  return 0;
}