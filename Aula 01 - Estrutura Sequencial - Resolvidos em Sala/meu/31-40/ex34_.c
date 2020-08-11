/*
Calcular a quantidade de latas de tinta necessárias, e também o custo, para pintar um tanque
cilíndrico de combustível, em que são fornecidos a altura e o raio do mesmo, além do preço da lata de
tinta.
Sabe-se que:
a)cada lata contém 5 litros de tinta;
b)cada litro de tinta pinta 3 metros quadrados;


  entradas:
  altura, raio e preco

  saidas:
  Quantidade de latas de tinta e o custo

  processamento:
  AreaTotal = 2 * (PI * raio*raio) + 2 * PI * raio * altura
  //          2x   area da base    +     area lateral
  AreaTotal = 2 * PI * raio * (raio + altura)
  latas = areatotal / 5 * 3
  se o resto dessa divisao for 0:
    esse e o numero de latas
  senao:
    aumenta mais uma lata
  preco = latas * precoPorLata
  
*/
#include <stdio.h>
#include <math.h>

int main () {
  float height, radius, price;
  float exactCans, cans, cost, area;
  const float PI = 3.14, literPerCan = 5, eficiency = 3;
  printf("==Preco e Quantidade para pintura de um cilindro== \n");
  printf("Qual o preco da lata de tinta \n(R$)>>> ");
  scanf("%f", &price);

  printf("Qual a altura do cilindro \n(m)>>> ");
  scanf("%f", &height);

  printf("Qual o Raio do cilindro \n(m)>>> ");
  scanf("%f", &radius);

  area = 2 * PI * radius * ( radius + height );
  exactCans = area / (literPerCan * eficiency);

  cans = ceil(exactCans);
  cost = cans * price;

  printf("Serao necessarias %.0f latas (R$ %.2f cada), a um custo de R$ %.2f. \n", cans, price, cost);


  int showInfo;
  printf("\n\nWant to know more info?(y=1/n=0)>> ");
  scanf("%d", &showInfo);
  if(showInfo == 1) {
    printf("Height      : %.2f \n", height);
    printf("Radius      : %.2f \n", radius);
    printf("PI          : %.2f \n", PI);
    printf("Area        : %.2f \n", area);
    printf("literPerCan : %.2f \n", literPerCan);
    printf("eficiency   : %.2f \n", eficiency);
    printf("exactCans   : %.2f \n", exactCans);
    printf("cans        : %.2f \n", cans);
    printf("Price       : %.2f \n", price);
    printf("cost        : %.2f \n", cost);
    printf("\n");
  } else if(showInfo == 0) {
    printf("end \n");
  } else {
    printf("err \n");
  }
  return 0;
}