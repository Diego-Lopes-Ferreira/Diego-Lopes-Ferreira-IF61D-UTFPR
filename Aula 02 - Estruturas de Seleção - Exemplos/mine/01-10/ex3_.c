/*
  Resolver a função y = f(x) + g(x), onde:
    h(x) = x*x - 16
    f(x) = {
      se x >= 0:
        h(x)
      senao:
        1
    }
    g(x) = {
      se f(x) = 0:
        x*x-16
      senao:
        0
    }
  Mostrar os parâmetros lidos e os valores calculados.


  entradas:
    -
  saidas:
    valor de f(x), g(x) e y
  processamento:
    define funcoes
    float h(float x) {
      return (x * x + 16)
    }
    float f(float x) {
      float result;
      if (x >= 0) result = h(x);
      else result = 1;
      return (result);
    }
    float g(float x) {
      float result;
      if (f(x) == 0) result = (x * x + 16);
      else if(f(x) > 0) result = 0;
      return (result);
    }
    y = f(x) + g(x)
*/
#include <stdio.h>
float h(float x) {
  return (x * x + 16);
}
float f(float x) {
  float result;
  if (x >= 0) result = h(x);
  else result = 1;
  return (result);
}
float g(float x) {
  float result;
  if (f(x) == 0) result = (x * x + 16);
  else if(f(x) > 0) result = 0;
  return (result);
}

int main () {
  float i, y, fx, gx;
  for (i = -3; i < 9; ++i) {
    fx = f(i);
    gx = g(i);
    y = fx + gx;
    printf("x = %f | f(x) = %f | g(x) = %f | y = %f \n", i, fx, gx, y);
  }
  return 0;
}
