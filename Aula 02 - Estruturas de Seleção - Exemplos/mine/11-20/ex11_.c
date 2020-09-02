/*
  Escreva um programa que leia 3 valores A, B e C e verifique se esses valores representam os
  lados de um triângulo.
  Para que seja um triângulo
    todos os lados devem ser maiores que zero
    nenhum lado deve ser >= que a soma dos outros dois lados.
  Se A, B e C representam os lados de um triângulo, então calcule e imprima sua área:
    area = (S*(S-a)*(S-b)*(S-c))2 onde S = (a+b+c)/2
  Informe também o tipo do triângulo:
    Escaleno: todos os lados diferentes.
    Isósceles: 2 lados iguais.
    Eqüilátero: todos os lados iguais.


  entradas:
    lados: a, b, c
  saidas:
    area e tipo
  processamento:
    se a == 0 || b == 0 || c == 0:
      nao tem triangulo ai
    senao, se a >= b + c || c >= a + c || c >= a + b:
      tambem nao tem triangulo
    senao:
      S = (a+b+c)/2
      area = ( S * (S - a) * (S - b) * (S - c) ) * 2;
      
      se a == b == c:
        e um triangulo equilatero
      senao, se a == b || b == c || a == c:
        e um triangulo isoceles
      senao:
        e um triangulo escaleno
*/
#include <stdio.h>

int main () {
  float a=0, b=0, c=0, S=0, area=0;

  printf("Digite os tres lados de um triangulo, separados por barra\n[lado/lado/lado]>>>");
  scanf("%f/%f/%f", &a, &b, &c);

  if (((a == 0) || (b == 0) || (c == 0)) || ((a >= b + c) || (c >= a + c) || (c >= a + b)))
    printf("Esses lados nao formam um triangulo \n");
  else {
    S = (a + b + c) / 2;
    area = (S * (S - a) * (S - b) * (S - c)) * 2;
    printf("A area e: %.2f \n", area);
    if ((a == b) && (a == c) && (b == c)) printf("E um triangulo Equilatero \n");
    else if((a == b) || (b == c) || (a == c)) printf("E um triangulo Isoceles \n");
    else printf("E um triangulo escaleno \n");
  }
  
  return 0;
}