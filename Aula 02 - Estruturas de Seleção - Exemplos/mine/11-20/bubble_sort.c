#include <stdio.h>

int main() {
  int n=0, i, j, temp;
  printf("Digite o n de elementos a serem colocados em ordem \n>>> ");
  scanf("%d", &n);
  int arr[n];
  printf("The array: \n");
  for (i = 0; i < n; i++) {
    printf("Numero %03d de %03d >>> ", (i + 1), n);
    scanf("%d", &arr[i]);
  }
  printf("\nArray   : ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  for (i = 0; i < n - 1; i++) {
    // repetir n vezes o processo
    for (j = 0; j < n - i - 1; j++) {
      // para cada elemento, troque as posicoes necessarias de lugar
      if (arr[j] > arr[j + 1]) {
        // troque se o da esquerda for maior que o da direita
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  printf("\nEm ordem: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}