/*
Calcular as raízes de uma equação do 2º grau, sendo que os valores A, B e C são fornecidos pelo usuário,
levando em consideração a análise da existência de raízes reais.


  entradas:
    a, b, c
  saidas:
    delta, se existe raiz real ou nao, e as raizes (caso existirem)
  processamento:
    ler a, b, c
    delta = (b*b) - (4*a*c)
    se delta < 0:
      nao existem raizes reais
    senao, se delta == 0:
      existe apenas uma raiz real: (-b) / (2*a)
    senao:
      existem 2 raizes reais:
        x1 = (-b + sqrt(delta)) / (2*a)
        x1 = (-b - sqrt(delta)) / (2*a)
  
*/
#include <stdio.h>
#include <math.h>

int main () {
  float a=0, b=0, c=0, delta=0, x=0, x1=0, x2=0;
  printf("Digite os valores da equacao no formato aXquadrado, bX e c \n(a/b/c)>>>");
  scanf("%f/%f/%f", &a, &b, &c);
  printf("%f X quadrado + %f X + %f \n", a, b, c);
  delta = (b*b) - (4*a*c);
  //printf("Delta: %f \n", delta);
  if (delta < 0) {
    printf("Delta menor que 0 \n");
    printf("Nao existem raizes reais \n");
  } else if (delta == 0) {
    printf("Delta igual a 0 \n");
    printf("Existe apenas uma raiz real \n");
    x = (-b) / (2*a);
    printf("X = %f \n", x);
  } else {
    printf("Delta maior que 0 \n");
    printf("Existem duas raizes reais \n");
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);
    printf("X1 = %f | X2 = %f \n", x1, x2);
  }
  return 0;
}