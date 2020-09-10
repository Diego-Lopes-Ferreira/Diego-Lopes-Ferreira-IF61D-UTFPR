/*
  Uma empresa decide dar um aumento de 30% aos funcionários com salários
  inferiores a R$ 500,00. Escreva um programa que receba o salário do
  funcionário e mostre o valor do salário reajustado ou uma mensagem, caso ele
  não tenha direito ao aumento.


  entradas:
    salario
  saidas:
    aumento
  processamento:
    se salario < 500:
      mostre(salario * 1.3)
    senao:
      mostre(salario)
      mostre("Sem aumento")
*/
#include <stdio.h>

int main() {
  float salario;
  printf("Digite o salario \n>>> ");
  scanf("%f", &salario);
  if (salario < 500) {
    printf("Voce recebe aumento \n");
    printf("Salario final: R$ %07.2f \n", (salario * 1.3));
  } else {
    printf("Voce nao recebe aumento \n");
    printf("Seu salario permanece: R$ %07.2f \n", salario);
  }
  return 0;
}