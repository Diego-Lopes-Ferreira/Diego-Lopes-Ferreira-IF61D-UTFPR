/*
  Dados três números inteiros distintos, exiba-os em ordem crescente

  entradas:
    a, b, c;
  saidas:
    lista em ordem
  processamento:
    ler n1, n2, n3
    para um i, ate que i seja < 3, i++:
      para cada j, sendo j < 3 - i - 1, j++:
        se o elemento[j] > elemento[j + 1]:
          troque os dois de posicao
    mostre os elementos trocados

*/
#include <stdio.h>

int main() {
  float temp;
  float elementos[3];
  int i, j;  // fors...

  printf("Digite 3 numeros\n");

  // Leitura dos elementos
  for (i = 0; i < 3; i++) {
    printf("Numero %d >>> ", (i + 1));
    scanf("%f", &elementos[i]);
  }

  printf("\nSeus numeros : ");
  for (i = 0; i < 3; i++) {
    printf("%.2f ", elementos[i]);
  }

  for (i = 0; i < 3; i++) {
    // repetir 3 vezes o processo
    for (j = 0; j < (3 - 1); j++) {
      // repetir para cada elemento da lista, menos o ultimo
      if (elementos[j] > elementos[j + 1]) {
        // se o da esquerda for menor que o da direita
        // trocar de lugar:
        temp = elementos[j];
        elementos[j] = elementos[j + 1];
        elementos[j + 1] = temp;
      }
    }
  }

  printf("\nEm ordem     : ");
  for (i = 0; i < 3; i++) {
    printf("%.2f ", elementos[i]);
  }

  return 0;
}