/*
  Numa papelaria, até 100 folhas, a cópia custa R$ 0,25, e acima de 100 folhas
  custa R$ 0,20. Dado o total de cópias, informe o total a ser pago.


  entradas:
    n de copias
  saidas:
    valor
  processamento:
    se <n de copias> > 100:
      <custo> = <n de copias> * 0.20
    senao:
      <custo> = <n de copias> * 0.25
*/
#include <stdio.h>

int main() {
  float custo = 0;
  int nDeFolhas = 0;

  printf("Digite o n de folhas \n>>> ");
  scanf("%d", &nDeFolhas);

  if (nDeFolhas != 0) {
    if (nDeFolhas > 100) {
      custo = nDeFolhas * 0.20;
      printf("O valor total e de R$ %.2f (%.2f por folha) \n", custo, 0.20);
    } else {
      custo = nDeFolhas * 0.25;
      printf("O valor total e de R$ %.2f (%.2f por folha) \n", custo, 0.25);
    }
  }
  return 0;
}