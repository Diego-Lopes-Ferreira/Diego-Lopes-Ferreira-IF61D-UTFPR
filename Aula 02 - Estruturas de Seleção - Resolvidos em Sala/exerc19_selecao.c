/*
Calcular o dia da semana de uma data entre 1 de março de 1700 e 28 de fevereiro 
de 2100, utilizando
o seguinte método:

n = (int)(365.25 * g) + (int)(30.6 * f) - 621049 + d

ds = round( ((float)n/7 - (n/7)) * 7) + delta + 1
  
if (m <= 2){
  g = (a - 1);
  f = m + 13;
 } 
 else{
   g = a;
   f = m + 1;
 }
 if (n < 36523)
   delta = 2
   else
   if (n < 73048)
     delta = 1
     else
       delta = 0
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n, g, f, delta, d, m, a, ds;
	
	printf("\nCalcular o dia da semana de uma data");
	printf("\nInforme a data no formato dd/mm/aaaa : ");
	scanf("%d/%d/%d",&d,&m,&a);
	
  if (m <= 2){
    g = (a - 1);
    f = m + 13;
    } 
    else{
      g = a;
      f = m + 1;
   }

  n = (int)(365.25 * g) + (int)(30.6 * f) - 621049 + d;
	
  if (n < 36523)
    delta = 2;
    else
      if (n < 73048)
        delta = 1;
        else
          delta = 0;
	
  ds = round(((float)n / 7 - (n / 7)) * 7) + delta + 1;  
  
  switch(ds){
		case 1:
			printf("\ndomingo --> %d",ds);
			break;
		case 2:
			printf("\nsegunda --> %d",ds);
			break;
		case 3:
			printf("\nterca --> %d",ds);
			break;
		case 4:
			printf("\nquarta --> %d",ds);
			break;
		case 5:
			printf("\nquinta --> %d",ds);
			break;
		case 6:
			printf("\nsexta --> %d",ds);
			break;
		case 7:
			printf("\nsabado --> %d",ds);
			break;
		default: 
			printf("\nERRO");
      printf("\nds --> %d",ds);
	}
	return 0;
}