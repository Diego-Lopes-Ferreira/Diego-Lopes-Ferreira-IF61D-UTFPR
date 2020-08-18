/*
Calcular o preço de venda de um carro. O preço de venda é formado pelo preço da montadora,
mais 15% de lucro, mais 11% de IPI, mais 17% de ICM. As porcentagens são sobre o preço da montadora,
que é lido. Informe o preço final e o valor dos impostos.


  entradas:
    preco da montadora
  saidas:
    Preco final, IPI e ICM
  processamento:
    ler o preco da montadora
    ipi = 0.11 * preco da montadora
    icm = 0.17 * preco da montadora
    preco final = preco da montadora + ipi + icm
*/
#include <stdio.h>

int main () {
  
  float manufacturerPrice, ipi, icm, finalPrice;

  printf("Valor do carro na fabrica \n>>> ");
  scanf("%f", &manufacturerPrice);

  ipi = manufacturerPrice * 0.11;
  icm = manufacturerPrice * 0.17;

  finalPrice = manufacturerPrice + ipi + icm;

  printf("\nO valor final do carro e R$ %.2f \n\n", finalPrice);
  printf("O valor da montadora e R$ %.2f \n", manufacturerPrice);
  printf("O valor dos impostos e R$ %.2f \n", (ipi + icm));
  printf("    > IPI R$ %.2f \n", ipi);
  printf("    > ICM R$ %.2f \n", icm);


  return 0;
}