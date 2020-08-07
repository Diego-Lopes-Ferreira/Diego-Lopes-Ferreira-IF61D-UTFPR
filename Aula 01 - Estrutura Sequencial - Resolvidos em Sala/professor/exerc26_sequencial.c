/*
26. 
Quais os valores armazenados em SOMA, NOME e TUDO, 
supondo-se que NUM, X, COR, DIA, TESTE
e TESTE2 valem, respectivamente, 5, 2, "AZUL", "TERÇA", FALSE e TRUE

a. NOME <- DIA
b. SOMA <- (NUM*2/X) + (X + 1)
c. TUDO <- NAO ((TESTE OU TESTE2) E (X <> NUM))
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
	char cor[20] = "azul", nome[20], dia[20] = "terca";
	float soma, num = 5, x = 2;
	bool tudo, teste = false, teste2 = true;
	
	strcpy(nome,dia);
	soma = (num * 2 / x) + (x + 1);
	tudo = (!((teste || teste2) && (x != num)));
	
	printf("\nNOME --> %s",nome);
	printf("\nSOMA --> %f",soma);
	printf("\nTUDO --> %d",tudo);
	
	return 0;
}

