/*
  Calcular o dia da semana de uma data entre 1 de março de 1700 e 28 de
  fevereiro de 2100, utilizando o seguinte método:
  n = (int)(365.25 * g) + (int)(30.6 * f) - 621049 + d;
  ds = round( frac(n/7) *7) + delta + 1;
    // sendo:
    d => dia
    m => mes
    a => ano
    ds => dia da semana [sabado, domingo, segunda, terca, quarta, quinta, sexta]

    float calcG(float a){
      if (a <= 2)
        return a - 1;
      else
        return a;
    }
    float calcF(float m){
      if (m <= 2)
        return m+13;
      else
        return m+1;
    }
    float calcDelta () = {
      if (n < 36523)
       return 2;
      if (n < 73048)
       return 1;
      else
        return 0
    }

  entradas:

  saidas:

  processamento:

*/
#include <math.h>
#include <stdio.h>

float calcG(float a) {
  if (a <= 2)
    return a - 1;
  else
    return a;
}
float calcF(float m) {
  if (m <= 2)
    return m + 13;
  else
    return m + 1;
}
float calcDelta(float n) {
  if (n < 36523)
    return 2;
  else if (n < 73048)
    return 1;
  else
    return 0;
}
float calcFrac(float x) {
  float floor, final;
  floor = floorf(x);
  final = x - floor;
  return final;
}

int main() {
  float d, m, a, ds;
  float g, f, delta, n;

  printf(
      "Digite a data no formato: DD/MM/AAAA (com as barras) \nDD/MM/AAAA>>> ");
  scanf("%f/%f/%f", &d, &m, &a);
  printf("Dia: %.2f Mes: %.2f Ano: %.2f \n", d, m, a);

  g = calcG(a);
  printf("G: %.2f \n", g);
  f = calcF(m);
  printf("F: %.2f \n", f);
  n = (float)((int)(365.25 * g) + (int)(30.6 * f) - 621049 + d);
  printf("N: %.2f \n", n);

  delta = calcDelta(n);
  printf("Delta: %.2f \n", delta);
  ds = round(calcFrac(n / 7) * 7) + delta + 1;
  printf("Ds: %.2f \n", ds);

  if (ds == 0) {
    printf("Sabado \n");
  } else if (ds == 1) {
    printf("Domingo \n");
  } else if (ds == 2) {
    printf("Segunda \n");
  } else if (ds == 3) {
    printf("Terca \n");
  } else if (ds == 4) {
    printf("Quarta \n");
  } else if (ds == 5) {
    printf("Quinta \n");
  } else if (ds == 6) {
    printf("Sexta \n");
  }
  return 0;
}