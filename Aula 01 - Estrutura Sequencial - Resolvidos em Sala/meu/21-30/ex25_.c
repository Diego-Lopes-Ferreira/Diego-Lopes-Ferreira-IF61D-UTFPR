/*
Escreva um programa para calcular e exibir a área de uma circunferência. A fórmula para a área é:
A= p*R², onde A é a área da circunferência, p = 3.14 e R é o raio da circunferência. O raio deve ser
fornecido pelo usuário.



  entradas:
    real raio
  saidas:
    area do circulo
  processamento:
   area = PI * R*R
*/
#include <stdio.h>

int main () {
  float radius, area, PI;
  PI = 3.14;
  printf("Digite o raio do circulo \n>>> ");
  scanf("%f", &radius);

  area = PI * radius * radius;

  printf("A area e %.2f \n", area);
  
  return 0;
}