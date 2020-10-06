/*

  Escreva um programa que calcule e escreva o valor de S:
  S= 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50

  entradas:
    nada
  saidas:
    Valor de S
  processamento:
    Enquanto deBaico < 50:
      deCima += 2;
      deBaixo += 1;
      s += (deCima / deBaixo);
*/
#include <stdio.h>

int main() {
  int deCima = 1, deBaixo = 1;
  float s = 0, temp = 0;
  while (deBaixo < 51) {
    temp = ((float)deCima / (float)deBaixo);
    s += temp;
    printf("%d / %d = %f \n", deCima, deBaixo, temp);
    deCima += 2;
    deBaixo += 1;
  }
  printf("%f \n", s);

  return 0;
}