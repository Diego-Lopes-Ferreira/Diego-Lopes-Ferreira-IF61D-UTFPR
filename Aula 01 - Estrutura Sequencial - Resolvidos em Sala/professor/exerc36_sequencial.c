/*
36. Calcular a diferenca em dias, meses e anos entre duas datas 
fornecidas no formato DD MM AAAA
(DD = dia; MM =mes; AAAA = ano com quatro digitos)
*/
#include <stdio.h>
int main(){
	int d1, m1, a1, d2, m2, a2, d3, m3, a3, dif;
	printf("\nCalcula a diferenca entre duas datas\n");
	printf("Digite a data mais nova: dd/mm/aaaa ");
	scanf("%d/%d/%d",&d1,&m1,&a1);
	printf("Digite a data mais antiga: dd/mm/aaaa ");
	scanf("%d/%d/%d",&d2,&m2,&a2);
	
	dif = (d1 + m1 * 30 + a1 * 365) - (d2 + m2 * 30 + a2 * 365);
	
	a3 = dif / 365; 
	m3 = dif % 365 / 30;
	d3 = dif % 365 % 30;
	
	printf("\nA diferenca e de %d dias %d meses %d anos",d3,m3,a3);
	return 0;
}