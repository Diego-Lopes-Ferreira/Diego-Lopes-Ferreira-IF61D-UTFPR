/*
Calcular a diferença em dias, meses e anos entre duas datas fornecidas no formato DD MM AAAA
(DD = dia; MM =mês; AAAA = ano com quatro dígitos)


  entradas:
    data1
    data2
  saidas:
    diferenca entre as datas
  processamento:
    converter cada uma das datas informadas em dias,
    subtraindo a menor da maior
      dia2 + mes2 * 30 + ano2 * 365 - dia1 + mes1 * 30 + ano1 * 365
    esta subtracao resulta em uma diferenca em dias
    esta diferenca em dias deve ser convertida para
    anos, meses e dias
      ano3 = diferenca DIV 365
      mes3 = diferenca MOD 365 DIV 30	
      dia3 = diferenca MOD 365 MOD 30		
--------------------------------------------------
inteiro d1, m1, a1, d2, m2, a2, d3, m3, a3, dif

escreva("Calcula a diferenca em dias, meses e anos")
escreva("entre duas datas no formato DD/MM/AAAA")
escreva("informe primeiro a data mais recente")
escreva("no formato DD/MM/AAAA")
leia(d1/m1/a1)
escreva("agora informe a data mais antiga")
escreva("no formato DD/MM/AAAA")
leia(d2/m2/a2)

dif = (d2 + m2 * 30 + a2 * 365) - (d1 + m1 * 30 + a1 * 365)

a3 = dif DIV 365
m3 = dif MOD 365 DIV 30	
d3 = dif MOD 365 MOD 30	

escreva("A diferenca e de ", d3, " dias ", m3, " meses ", a3, " anos.\n");
*/
#include <stdio.h>

int main(){
	int d1, m1, a1, d2, m2, a2, d3, m3, a3, dif;

  printf("\n===Calculadora de datas===\n");
  printf("entre duas datas no formato DD/MM/AAAA\n");
  printf("Informe a data mais recente (inclusive com as barras) \n(DD/MM/AAAA)>>> ");
  scanf("%d/%d/%d",&d1,&m1,&a1);
  printf("\nInforme a data mais antiga (inclusive com as barras) \n(DD/MM/AAA)>>> ");
  scanf("%d/%d/%d",&d2,&m2,&a2);

  dif = (d1 + m1 * 30 + a1 * 365) - (d2 + m2 * 30 + a2 * 365);

  a3 = dif / 365;
  m3 = dif % 365 / 30;	
  d3 = dif % 365 % 30;

  printf("\nA diferenca e de %d dias %d meses %d anos\n", d3, m3, a3);	
	
	return 0;
}