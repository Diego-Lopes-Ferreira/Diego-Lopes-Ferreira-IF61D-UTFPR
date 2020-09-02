/*
 Criar um programa que leia 2 números. Caso o primeiro número lido seja maior que o segundo,
imprima na tela o primeiro número menos o segundo, caso contrário mostre a soma dos dois números


  entradas:
    n1 e n2
  saidas:
    Se n1 for maior que o n2:
      n1 - n2
    senao:
      n1 + n2
  processamento:
  
*/
#include <stdio.h>

int main() {
  float n1, n2;

  printf("Digite 2 numeros separados por uma barra \n");
  scanf("%f/%f", &n1, &n2);

  if (n1 > n2) printf("%f \n", (n1 - n2));
  else printf("%f \n", (n1 + n2));

  return 0;
}