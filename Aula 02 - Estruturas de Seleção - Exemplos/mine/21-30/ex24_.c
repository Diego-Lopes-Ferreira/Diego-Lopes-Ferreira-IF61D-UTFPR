/*
  Altere o programa criado no item 2 para que ele use a estrutura switch case
  para resolver o problema.
*/
#include <stdio.h>

int main() {
  float valor1 = 0, valor2 = 0;
  int n1 = 0, n2 = 0;

  printf("Digite dois valores inteiros separados por uma barra \n[n1/n2]>>> ");
  scanf("%d/%d", &n1, &n2);
  printf(
      "Digite dois valores reais separados por uma barra "
      "\n[valor1/valor2]>>> ");
  scanf("%f/%f", &valor1, &valor2);

  switch (n2) {
    case 0:
      printf("Nao e possivel realizar divisao por zero \n");
      break;
    default:
      printf("A divisao %d / %d = %f \n", n1, n2, (float)(n1 / n2));
      break;
  }

  if ((valor1 + valor2) > 100.25)
    printf("A soma outros dois valores digitados e maior que 100.25 \n");
  else if ((valor1 + valor2) == 100.25)
    printf("A soma outros dois valores digitados e maior que 100.25 \n");
  else
    printf("A soma outros dois valores digitados e menor que 100.25 \n");

  return 0;
}