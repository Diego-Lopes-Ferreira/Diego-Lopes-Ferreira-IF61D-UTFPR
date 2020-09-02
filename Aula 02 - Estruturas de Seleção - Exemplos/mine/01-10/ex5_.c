/*
Obter um nº qualquer e informar se este nº é par, ímpar, positivo ou negativo.


  entradas:
    n
  saidas:
    se e par ou impar
    se e positivo ou negativo
  processamento:
    se n == 0:
      nao e nem par, nem impar nem positivo nem negativo
    senao:
      se n mod 5 == 0:
        n e par
      senao:
        n e impar

      se n < 0:
        n e negativo
      senao
        n e positivo
  
*/
#include <stdio.h>

int main () {
  int n;

  printf("Digite um valor inteiro \n>>> ");
  scanf("%d", &n);

  if (n == 0) printf("O numero digitado e zero\n(nem negativo nem positivo)\n(nem par nem impar) \n");
  else if (n < 0) printf("%d e negativo\n(nem par nem impar) \n", n);
  else {
    printf("%d e positivo \n", n);
    if (n % 2 == 0) printf("%d e par \n", n);
    else printf("%d e impar \n", n);
  }

  return 0;
}