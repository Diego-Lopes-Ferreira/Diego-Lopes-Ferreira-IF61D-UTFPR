#include <stdio.h>
//um material radioativo perde 50% de sua massa a cada 75 segundos
//dado o valor da massa do material, calcular quanto tempo em
//segundos este material leva para que sua massa seja menor do que
//0,05gramas
main(){
  float massa;
  int tempo;
  printf("Informe o valor da massa do material: ");
  scanf("%f", &massa);
  tempo = 0;
  while (massa > 0.05){
    massa = massa / 2;
    tempo = tempo + 75;
  }
  printf("tempo --> %d", tempo);
}
