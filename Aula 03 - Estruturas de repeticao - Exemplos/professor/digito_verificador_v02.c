#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// 105640-1

int main(){
  char valor[15], inverso[15];
  long int conta, numero, digito, i;
	
	fflush(stdin);
	gets(valor);

	strcpy(inverso,valor);
	strrev(valor);
  numero = atoi(valor);
  conta = atoi(inverso);
  
  numero = numero + conta;
	
	for(i = 1, digito = 0;numero != 0;i = i + 1){
		digito = digito + (numero % 10) * i;
		numero = numero / 10;
	}
		
	conta = conta * 10 + digito % 10;
		
	return 0;
} 