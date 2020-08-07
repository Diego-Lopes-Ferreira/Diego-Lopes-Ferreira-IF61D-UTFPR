/*
01) O dia da semana para uma data qualquer pode ser calculado pela seguinte 
f�rmula:
Dia da semana = (int(2.6*M-0.1)+D+A+Adiv4+Sdiv4-2*S)MOD7
int() retorna a parte inteiro de um n�mero
M � representa o n�mero do m�s. Janeiro e fevereiro s�o os meses 11 e 12 do ano 
precedente, mar�o � o m�s 1 e dezembro � o m�s 10;
D � representa o dia do m�s;
A � representa o n�mero formado pelos dois �ltimos algarismos do ano;
S � representa o n�mero formado pelos dois primeiros algarismos do ano;
Os dias da semana s�o numerados de zero a seis; Domingo corresponde a zero, 
Segunda a 1, e assim por diante.

entradas de dados:
  dia, mes e ano
sa�das de dados:
  dia da semana da data
processamento	  
  obter a data no formato dd/mm/aaaa
  separar os dois primeiros e dois �ltimos d�gitos da data
  se o mes for igual a 01 ou igual a 02, somar 10 ao mes
    senao subtrair 02 do mes
  calcular o dia da semana
	mostrar o dia da semana baseado no calculo
	0 - domingo, 1 - segunda, 2 - ...
f�rmulas:
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