/*
  Numa fábrica, uma máquina precisa de manutenção sempre que o número de peças
  defeituosas supera 10% da produção. Dados o total de peças produzidas e o
  total de peças defeituosas, informe se a máquina precisa de manutenção.

  entradas:
    pecas totais e pecas defeituosas
  saidas:
    se precisa de manutencao ou nao
  processamento:
    se (<pecas defeituosas> > (<pecas totais> * 0.10)):
      precisa de manutencao
    senao:
      nao precisa de manutencao
*/
#include <stdio.h>

int main() {
  float total, defeitos;

  printf("Digite o n de pecas totais produzido pela maquina \n>>> ");
  scanf("%f", &total);
  printf("Digite o n de pecas produzidas com defeito pela maquina \n>>> ");
  scanf("%f", &defeitos);

  if (defeitos > (0.1 * total))
    printf("A maquina precisa de manutencao \n");
  else
    printf("A maquina nao precisa de manutencao \n");

  return 0;
}