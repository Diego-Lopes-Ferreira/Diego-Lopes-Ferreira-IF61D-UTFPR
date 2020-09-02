/*

  O dia da semana para uma data qualquer pode ser calculado pela seguinte fórmula:
  Dia da semana = ( int( 2.6 * M - 0.1 ) + dia + A + (A div 4) + (S div 4) - 2 * S ) % 7
  
  M – representa o número do mês. Janeiro e fevereiro são os meses 11 e 12 do ano precedente,
  março é o mês 1 e dezembro é o mês 10;
  D – representa o dia do mês;
  A – representa o número formado pelos dois últimos algarismos do ano;
  S – representa o número formado pelos dois primeiros algarismos do ano;
  
  Os dias da semana são numerados de zero a seis; Domingo corresponde a zero, Segunda a 1, e
  assim por diante.


  entradas:
    dia mes e ano
  saidas:
    dia da semana
  processamento:
    se o mes for 1 ou 2, *mes += 10* (transformar em 11 e 12 do ano anterior)

  
*/
#include <stdio.h>

int main () {

  int dia=0, mes=0, ano=0, s=0, a=0, ds=0;

  printf("Digite uma data no formato DD/MM/AAAA \n");
  scanf("%d/%d/%d", &dia, &mes, &ano);
  printf("Data: %d/%d/%d \n", dia, mes, ano);
  if ((mes == 1) || (mes == 2)) {
    mes += 10;
    ano -= 1;
  } else {
    mes -= 2;
  }
  printf("Data: %d/%d/%d \n", dia, mes, ano);
  
  s = ano / 100;
  printf("s: %d \n", s);
  a = ano %  100;
  printf("a: %d \n", a);
  //Dia da semana = ( int( 2.6 * M - 0.1 ) + D + A + (A div 4) + (S div 4) - 2 * S ) % 7
  ds = ( (int)(2.6 * mes - 0.1) + dia + a + (a/4) + (s/4) - (2*s) ) % 7;
  printf("ds: %d \n", ds);

  printf("O dia da semana e: ");
  if (ds == 0) printf("Domingo \n");
  if (ds == 1) printf("Segunda \n");
  if (ds == 2) printf("Terça \n");
  if (ds == 3) printf("Quarta \n");
  if (ds == 4) printf("Quinta \n");
  if (ds == 5) printf("Sexta \n");
  if (ds == 6) printf("Sabado \n");

  printf("Ou por outro metodo: ");
  if (ds == 0) printf("Domingo \n");
  else if (ds == 1) printf("Segunda \n");
  else if (ds == 2) printf("Terça \n");
  else if (ds == 3) printf("Quarta \n");
  else if (ds == 4) printf("Quinta \n");
  else if (ds == 5) printf("Sexta \n");
  else if (ds == 6) printf("Sabado \n");
  else printf("Erro \n");

  printf("Ou por outro metodo: ");
  switch (ds)
  {
  case 0:
    printf("Domingo \n");
    break;
  case 1:
    printf("Segunda \n");
    break;
  case 2:
    printf("Terca \n");
    break;
  case 3:
    printf("Quarta \n");
    break;
  case 4:
    printf("Quinta \n");
    break;
  case 5:
    printf("Sexta \n");
    break;
  case 6:
    printf("Sabado \n");
    break;
  default:
    printf("Erro \n");
    break;
  }

  return 0;
}