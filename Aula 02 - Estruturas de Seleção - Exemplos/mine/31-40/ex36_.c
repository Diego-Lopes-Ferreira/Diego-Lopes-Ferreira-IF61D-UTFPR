/*

  Escreva um programa para calcular e mostrar o salário reajustado de um
  funcionário. O percentual de aumento encontra-se na tabela a seguir

  |    até R$ 300,00   | 35% de aumento |
  | acima de R$ 300,00 | 15% de aumento |

  entradas:
    salario
  saidas:
    aumento
  processamento:
    se o salario for maior que 300:
      mostre 0.15 * salario
    senao:
      mostre 0.35 * salario
*/
#include <stdio.h>

int main() {
  float salario;
  printf("Digite o salario \n>>> ");
  scanf("%f", &salario);
  if (salario > 300) {
    printf("O salario tera 15%% de aumento\n");
    printf("Total: R$ %.2f \n", (salario * 1.15));
  } else {
    printf("O salario tera 35%% de aumento\n");
    printf("Total: R$ %.2f \n", (salario * 1.35));
  }
  return 0;
}