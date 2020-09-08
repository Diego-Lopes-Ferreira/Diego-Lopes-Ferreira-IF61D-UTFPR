/*
  Dados três números inteiros, verifique se eles podem ser lados de um triângulo
  e, se puderem, classifique o triângulo como equilátero, isóscele ou escaleno.

  Para ser lados de um triangulo cada lado deve ser menor que a soma dos outros
  dois lados.

  - Um triângulo equilátero possui os três lados iguais;
  - Um triângulo isóscele possui apenas dois lados iguais;
  - Um triângulo escaleno nenhum dos lados é igual.

  entradas:
    a, b, c;
  saidas:
    tipo do triangulo (ou se nao e um triangulo)
  processamento:
    se (a+b < c) ou (a+c < b) ou (b+c < a):
      nao e um triangulo
    senao, se (a==b) e (b==c):
      triangulo equilatero
    senao, se ((a==b) e (b!=c)) ou ((a==c) e (a!=b)) ou ((b==c) e (a!=c):
      triangulo isoceles
    senao:
      triangulo escaleno
*/
#include <stdio.h>

int testeIsoceles(float a, float b, float c) {
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
  } else if ((a == b) && (b == c)) {
    printf("Triangulo Equilatero \n");
  } else if (testeIsoceles(a, b, c) == 1) {
    printf("Triangulo Escaleno \n");
  } else {
    printf("Triangulo Isoceles \n");
  }
  return 0;
}