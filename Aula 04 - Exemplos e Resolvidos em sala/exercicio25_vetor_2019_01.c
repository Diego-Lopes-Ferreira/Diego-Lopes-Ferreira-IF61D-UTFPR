/*
Quest�o 25 - Leia um vetor contendo letras de uma frase inclusive os espa�os 
em branco. Retirar os espa�os em branco do vetor e depois escrev�-los.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	char frase[100];
	int i, j;
		
	printf("\nDigite uma frase: ");
	fflush(stdin);
	gets(frase);
	
	for(i = 0;frase[i] != '\0';i = i + 1){
		if(frase[i] == ' '){
			for(j = i;frase[j] != '\0';j = j + 1){
			  frase[j] = frase[j+1];
			}
		}
	}
	
	printf("\nFrase sem espacos: %s",frase);	
	
	return 0;
}
