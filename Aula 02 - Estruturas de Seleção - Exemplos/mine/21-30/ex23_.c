/*
  Escreva um programa em linguagem C que contenha a declaração de duas variáveis
  do tipo float chamadas valor1 e valor2.

  Peça então para a pessoa informar por meio do teclado um valor para estas
  variáveis.

  Se a soma dessas variáveis for maior que 100.25 exiba a seguinte mensagem:
  “A soma dos valores digitados e maior que 100.25”.

  ??
    Escreva um programa em linguagem C que contenha a declaração de duas
  variáveis do tipo int chamadas n1 e n2. Se o valor da variável n2 for igual a
  0 então exiba a seguinte mensagem “Não e possível realizar a divisão de um
  número por 0.”. Caso contrário realize a divisão entre n1 e n2 e exiba o
  resultado.
  ??

  entradas:
    float valor1, valor2 e int n1, n2
  saidas:
    frase ou divisao
  processamento:
    ler os floats
    ler os ints
    se n2 == 0:
      mostre("Nao e possivel dividir por zero")
    senao:
      mostre("Adivisao de <n1> por <n2> = <n1 / n2>")
    se (valor1+valor1) > 100.25:
      mostre(“A soma dos valores digitados e maior que 100.25”)
    senao
      mostre(“A soma dos valores digitados e menor que 100.25”)
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

  if (n2 == 0)
    printf("Nao e possivel realizar divisao por zero \n");
  else
    printf("A divisao %d / %d = %f \n", n1, n2, (float)(n1 / n2));

  if ((valor1 + valor2) > 100.25)
    printf("A soma outros dois valores digitados e maior que 100.25 \n");
  else if ((valor1 + valor2) == 100.25)
    printf("A soma outros dois valores digitados e maior que 100.25 \n");
  else
    printf("A soma outros dois valores digitados e menor que 100.25 \n");

  return 0;
}