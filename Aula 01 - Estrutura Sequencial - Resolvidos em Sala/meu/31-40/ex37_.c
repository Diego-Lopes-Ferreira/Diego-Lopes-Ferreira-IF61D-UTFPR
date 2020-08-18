/*
Calcular a diferença em horas, minutos e segundos para dois horários no mesmo dia, obtidos no
formato HH MM SS (HH = horas; MM = minutos; SS = segundos)



  entradas:
    h1, m1, s1 e h2, m2, s2;
  saidas:
    hdif, mdif, sdif
  processamento:
    s1 += m1*60 + h1*3600;
    s2 += m2*60 + h2*3600;

    sdif = s2 - s1

    mdif = sdif / 60
    hdif = mdif / 60
    sdif = sdif % 3600
  
*/
#include <stdio.h>

int main () {
  int h1=0, m1=0, s1=0;
  int h2=0, m2=0, s2=0;
  int hdif=0, mdif=0, sdif=0;

  printf("Entre o primeiro horario \n(HH:MM:SS)>>>");
  scanf("%d:%d:%d", &h1, &m1, &s1);
  printf("Entre o segundo horario \n(HH:MM:SS)>>>");
  scanf("%d:%d:%d", &h2, &m2, &s2);
  
  s1 += m1*60 + h1*3600;
  s2 += m2*60 + h2*3600;

  sdif = s2 - s1;

  hdif = sdif / 3600;
  sdif -= hdif * 3600;
  mdif = sdif / 60;
  sdif -= mdif * 60;

  printf("A diferenca e de %d : %d : %d\n", hdif, mdif, sdif);
  return 0;
}