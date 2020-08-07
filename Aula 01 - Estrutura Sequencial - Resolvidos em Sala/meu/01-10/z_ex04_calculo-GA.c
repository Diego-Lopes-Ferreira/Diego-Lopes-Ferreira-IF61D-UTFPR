/* 4. Escreva um programa que calcule:
a) a área de um triângulo
b) a área de um círculo
c) a área de um cubo
d) a área de um cilindro
Solicitar os dados necessários para calcular cada área, mostrando o resultado na tela

M_PI = valor constante de pi
pow(x, y) = eleva x a potencia y */

#include <stdio.h>
#include <math.h> //biblioteca matematica
//#include <corecrt_math_defines.h>

float triangle (float base, float altura) {
  float area;
  area = (base * altura) / 2;
  return area;
}

float circle ( float raio ) {
  float area;
  area = pow(raio, 2) * 3.14;
  return area;
}

float cube ( float aresta ) {
  float volume;
  volume = pow(aresta, 3);
  return volume;
}

float cylinder ( float raio, float altura ) {
  float volume;
  volume = 2 * 3.14 * pow(raio, 2.0) * altura;
  return volume;
}


int main () {
  // Area do triangle:
  float triangleArea;
  triangleArea = triangle(36.0, 6.3);

  float circleArea;
  circleArea = circle(2.0);

  float cubeVol;
  cubeVol = cube(3.0);

  float cylinderVol;
  cylinderVol = cylinder(20.0, 30.0);
  
  printf("\nArea do Triangulo     : %.2f\n", triangleArea);
  printf("Area do Circulo       : %.2f\n", circleArea);
  printf("Volume de um cubo     : %.2f\n", cubeVol);
  printf("Volume de um cilindro : %.2f\n", cylinderVol);
}
