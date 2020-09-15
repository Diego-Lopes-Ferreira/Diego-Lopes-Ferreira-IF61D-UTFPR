/*

  Diego Lopes Ferreira
  RA: 2267241

  Questão 02

  Dados três números inteiros, verifique se eles podem compor um triângulo e, se
  puderem, classifique o triângulo como equilátero, isóscele ou escaleno.

  Para ser lados de um triangulo cada lado deve ser menor que a soma dos outros
  dois lados. Um triângulo equilátero possui os três lados iguais; Um triângulo
  isóscele possui apenas dois lados iguais; Um triângulo escaleno nenhum dos
  lados é igual.

  Se os três números lidos não puderem compor um triângulo, mostre uma mensagem
  e erro.

  entradas:
    numeros reais a, b, c
  saidas:
    classificacao do triangulo (ou a mensagem de erro)
  processamento:
    ler os 3 valores (a, b, c)
    //ver se os valores formam um triangulo
    se (a + b < c) ou (a + c < b) ou (b + c < a)
      mostre a mensagem de erro - nao e um triangulo
    senao:
      // teste se os 3 lados sao iguais
      se (a == b) e (b == c) //(consequentemente a = b)
        mostre que e um triangulo equilatero
      senao, teste se o triangulo e isoceles:
        se   ((a == b) e (b != c))
          ou ((a == c) e (a != b))
          ou ((b == c) e (a != c)):
            mostre que o triangulo e isoceles
      senao: (nenhuma das acima e verdadeira, a diferente de b diferente de c)
        mostre que e escaleno
*/
#include <stdio.h>

int testeIsoceles(float a, float b, float c) {
  // retorna 1 no caso dos 3 valores formarem um triangulo isoceles
  if ((a == b) && (b != c))
    return 1;
  else if ((a == c) && (a != b))
    return 1;
  else if ((b == c) && (a != c))
    return 1;
  else
    return 0;
}

int main() {
  float a = 0, b = 0, c = 0;

  printf("Digite os tres lados do suposto triangulo separados por barra");
  printf("\n>>> ");
  scanf("%f/%f/%f", &a, &b, &c);

  if ((a + b < c) || (a + c < b) || (b + c < a)) {
    printf("Essas tres retas nao formam um triangulo \n");
  } else {
    if ((a == b) && (b == c)) {
      printf("Triangulo Equilatero \n");
    } else if (testeIsoceles(a, b, c) == 1) {
      printf("Triangulo Isoceles \n");
    } else {
      printf("Triangulo Escaleno \n");
    }
  }
  return 0;
}