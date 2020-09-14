/*

  Diego Lopes Ferreira
  RA: 2267241

  Questão 03

  Dados três números inteiros distintos, exiba-os em ordem crescente

  entradas:
    numeros reais n1, n2, n3
  saidas:
    os tres em ordem
  processamento:
    crie as variaveis maior, meio e menor
    maior = n1
    meio = n2
    menor = n3

    se n2 > n1:
      maior = n2
      meio = n1
    senao, se n3 > n1:
      maior = n3
      meio = n1
      menor = n2
    senao
      maior = n1
      meio = n3
      menor = n2
*/
#include <stdio.h>

int main() {
  float maior, meio, menor;
  float n1, n2, n3;

  printf("Digite 3 numeros \n>>> ");
  scanf("%f", &n1);
  printf(">>> ");
  scanf("%f", &n2);
  printf(">>> ");
  scanf("%f", &n3);

  printf("Sua sequencia: %.1f %.1f %.1f \n", n1, n2, n3);

  maior = n1;
  meio = n2;
  menor = n3;

  if (n1 > n2) {
    if (n3 > n2) {
      maior = n1;
      meio = n3;
      menor = n2;
      if (n3 > n1) {
        maior = n3;
        meio = n1;
        menor = n2;
      }
    }
  } else /* n2 > n1 */ {
    if (n3 > n1) {
      if (n3 > n2) {
        maior = n3;
        meio = n2;
        menor = n1;
      } else {
        maior = n2;
        meio = n3;
        menor = n1;
      }
    }
  }

  printf("Em ordem    : %.1f %.1f %.1f \n", menor, meio, maior);
  return 0;
}
