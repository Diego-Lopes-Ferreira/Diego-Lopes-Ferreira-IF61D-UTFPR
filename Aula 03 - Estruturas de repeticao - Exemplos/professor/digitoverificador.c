/*
mostre na tela a soma de um número inteiro fornecido
pelo usuário, com a sua representação de trás para frente
exemplo
12345
54321
soma = 66666
encontrar o dígito verificador:
1 2 3 4 5
6 6 6 6 6 

1 * 6 + 2 * 6 + 3 * 6 + 4 * 6 + 5 * 6 --> 90

*/
#include <stdio.h>
#include <math.h>
int main(){
  int num, num2, aux, tamanho, soma, digito, i;
	printf("Digite um numero inteiro: ");
	scanf("%d",&num);
  tamanho = pow(10,(int)log10(num));
	aux = num;
	num2 = 0;
	while(aux > 0){
    num2 = num2 + aux % 10 * tamanho;
		aux = aux / 10;
		tamanho = tamanho / 10;
	}	
	printf("\nnum ---> %d",num);
	printf("\nnum2 --> %d",num2);
	printf("\nsoma --> %d",num + num2);
	soma = num + num2;
	digito = 0;
	i = (int)log10(soma) + 1;
	while(soma > 0){
		digito = digito + soma % 10 * i;
		soma = soma / 10;
		i = i - 1;		
	}
	printf("\nDigito verificador --> %d",soma%10);
	

	return 0;
}