/*
mostre na tela um número inteiro fornecido
pelo usuário, de trás para frente
exemplo
12345
54321
*/
#include <stdio.h>
int main(){
  int num;
	printf("Digite um numero inteiro: ");
	scanf("%d",&num);
	while(num > 0){
		printf("%d",num%10);
		num = num / 10;
	}	
	return 0;
}