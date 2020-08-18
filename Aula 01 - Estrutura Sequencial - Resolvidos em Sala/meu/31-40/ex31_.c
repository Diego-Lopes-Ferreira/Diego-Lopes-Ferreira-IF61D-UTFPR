/*
Tendo como dados de entrada dois pontos quaisquer de um plano cartesiano P(X1,Y1)e Q(X2,Y2)
calcule e mostre a distância entre eles. A distância é dada pela fórmula:
raiz((X2 - X1)^2 + (Y2 - Y1)^2)


  entradas:
    x1, x2, y1, y2
  saidas:
    distancia
  processamento:
    distancia = raiz de (X2 - X1)^2 + (Y2 - Y1)^2
*/
#include <stdio.h>
#include <math.h>

int main () {
  float x1, x2, y1, y2;
  float distancia;

  printf("Digite as cordenadas do ponto 1 \n(x/y)>>>");
  scanf("%f/%f", &x1, &y1);
  printf("Digite as cordenadas do ponto 2 \n(x/y)>>>");
  scanf("%f/%f", &x2, &y2);

  distancia = sqrt( pow((x2 - x1), 2) + pow((y2 - y1), 2) );
  printf("A distancia entre P1 (%.2f, %.2f) e P2 (%.2f, %.2f) e de %.2f unidades \n", x1, y1, x2, y2, distancia);
  return 0;
}