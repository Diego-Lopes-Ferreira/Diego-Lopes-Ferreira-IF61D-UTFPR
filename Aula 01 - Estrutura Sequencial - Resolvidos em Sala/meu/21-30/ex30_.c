/*
Calcular e apresentar a quantidade de galões cheios de 5 litros de combustível necessária em uma
viagem utilizando-se um automóvel que faz 12Km/l. O usuário fornecerá o tempo gasto e a velocidade
média na viagem.


  entradas:
  numeros Tempo e velocidade media
  
  saidas:
  Quantidades de galoes cheios de 5 litros
  
  processamento:
  distancia = Velocidade * tempo
  litrosDeGasolina = distancia / 12
  galoes = litrosDeGasolina / 5 (arredondado para cima)
*/
#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
  float time, speed, distance, liters, gallons;
  float eficiency, litersPerGallon, exactGallons;
  printf("Quanto tempo de viagem?\n(h)>> ");
  scanf("%f", &time);
  printf("Qual foi a velocidade media?\n(Km/h) >> ");
  scanf("%f", &speed);

  eficiency = 12;// km/l
  litersPerGallon = 5;

  distance = speed * time;// km/h * h = km
  liters = distance / eficiency;
  exactGallons = liters / litersPerGallon;
  

  if(fmod(exactGallons, litersPerGallon) == 0) {
    gallons = exactGallons;
    printf("Full gallons needed for the trip: %d \n", (int)gallons);
  } else {
    gallons = exactGallons + 1;
    printf("Full gallons needed for the trip: %d \n", (int)gallons);
  }

  int showInfo;
  printf("Want to know more info?(y=1/n=0)>> ");
  scanf("%d", &showInfo);
  
  if(showInfo == 1) {
    printf("time           : %.2f h\n", time);
    printf("speed          : %.2f km/h\n", speed);
    printf("distance       : %.2f km\n", distance);
    printf("eficiency      : %.2f km/l\n", eficiency);
    printf("liters         : %.2f l\n", liters);
    printf("litersPerGallon: %.2f l\n", litersPerGallon);
    printf("Exact gallons needed for the trip: %.2f \n", exactGallons);
    printf("Full gallons needed for the trip: %d \n", (int)gallons);
  } else if(showInfo == 0) {
    printf("end \n");
  } else {
    printf("err \n");
  }

  return 0;
}