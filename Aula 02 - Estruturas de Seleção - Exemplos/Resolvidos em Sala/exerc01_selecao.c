/*
01) O dia da semana para uma data qualquer pode ser calculado pela seguinte 
fórmula:
Dia da semana = (int(2.6*M-0.1)+D+A+Adiv4+Sdiv4-2*S)MOD7
int() retorna a parte inteiro de um número
M – representa o número do mês. Janeiro e fevereiro são os meses 11 e 12 do ano 
precedente, março é o mês 1 e dezembro é o mês 10;
D – representa o dia do mês;
A – representa o número formado pelos dois últimos algarismos do ano;
S – representa o número formado pelos dois primeiros algarismos do ano;
Os dias da semana são numerados de zero a seis; Domingo corresponde a zero, 
Segunda a 1, e assim por diante.

entradas de dados:
  dia, mes e ano
saídas de dados:
  dia da semana da data
processamento	  
  obter a data no formato dd/mm/aaaa
  separar os dois primeiros e dois últimos dígitos da data
  se o mes for igual a 01 ou igual a 02, somar 10 ao mes
    senao subtrair 02 do mes
  calcular o dia da semana
	mostrar o dia da semana baseado no calculo
	0 - domingo, 1 - segunda, 2 - ...
fórmulas:
  dois ultimos algarismos do ano <- ano MOD 100
  dois primeiros algarismos do ano <- ano DIV 100
  ds <- (int(2.6*M-0.1)+D+A+Adiv4+Sdiv4-2*S)MOD7
  
  ds = ((int)(2.6 * m - 0.1) + d + a + a / 4 + s / 4 - 2 * s) % 7
  
*/
#include <stdio.h>
int main(){
	int dia, mes, ano, a, s, ds;
	printf("\nCalcula o dia da semana de uma data");
	printf("\nDigite a data no formato DD/MM/AAAA :");
	scanf("%d/%d/%d",&dia,&mes,&ano);
	a = ano % 100;
	s = ano / 100;
	if ((mes == 1) || (mes == 2))
	  mes = mes + 10;
	  else
		  mes = mes - 2;
	ds = ((int)(2.6 * mes - 0.1) + dia + a + a / 4 + s / 4 - 2 * s) % 7;	
	switch(ds){
		case 0:
			printf("\ndomingo\n");
			break;
		case 1:
			printf("\nsegunda\n");
			break;
		case 2:
			printf("\nterca\n");
			break;
		case 3:
			printf("\nquarta\n");
			break;
		case 4:
			printf("\nquinta\n");
			break;
		case 5:
			printf("\nsexta\n");
			break;
		case 6:
			printf("\nsabado\n");
			break;
		default:
			printf("\nERRO\n");
	}
	return 0;
}