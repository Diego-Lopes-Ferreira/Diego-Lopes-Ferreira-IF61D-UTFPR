/*
Ler uma temperatura em graus Centigrados e apresente-a convertida em graus Fahrenheit.
A formula é: F = (9 * C + 160)/5



  entradas:
  Temperatura em graus
  saidas:
  Temperatura em Fahrenheit
  processamento:
  F = ( 9 * C + 160 ) / 5
*/
#include <stdio.h>

int main () {
  float fahr, celc;
  printf("Entre a temperatura em Graus Celsius:");
  scanf("%f", &celc);
  fahr = ( 9 * celc + 160 ) / 5;
  printf("%0.1f C = %0.1f F \n", celc, fahr);
  return 0;
}
