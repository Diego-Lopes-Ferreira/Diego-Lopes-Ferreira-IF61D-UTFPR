/*
Quest�o 12 - Desenvolver um programa que efetue a leitura de 10 elementos de 
uma matriz A do tipo vetor.
Construir uma matriz B de mesmo tipo, observando a seguinte lei de forma��o: 
Se o valor do �ndice for par, o valor dever� ser multiplicado por 5, sendo �mpar 
dever� ser somado por 5. Ao final mostrar os conte�dos das duas matrizes.
*/
#include <stdio.h>
int main(){
	int a[2][5], b[2][5], c[2][5], lin, col;
	
	for(lin = 0;lin < 2;lin = lin + 1)
		for(col = 0;col < 5; col = col + 1){
			printf("Digite o valor para a matriz[%d][%d]: ",lin,col);
			scanf("%d",&a[lin][col]);
		}
	
	printf("\nMatriz A\n");	
	for(lin = 0;lin < 2;lin = lin + 1){
		for(col = 0;col < 5; col = col + 1)
			printf("%d ",a[lin][col]);
		printf("\n");
	}
//se soma dos �ndices de linha e coluna for PAR multiplica
//por 5, sen�o soma 5		
	for(lin = 0;lin < 2;lin = lin + 1)
		for(col = 0;col < 5; col = col + 1){
			if ((lin + col) % 2 == 0)
			  b[lin][col] = a[lin][col] * 5;
			  else
				  b[lin][col] = a[lin][col] + 5;
		}	

//se o valor em a[lin][col] for PAR multiplica
//por 5, sen�o soma 5	
	for(lin = 0;lin < 2;lin = lin + 1)
		for(col = 0;col < 5; col = col + 1){
			if (a[lin][col] % 2 == 0)
			  c[lin][col] = a[lin][col] * 5;
			  else
				  c[lin][col] = a[lin][col] + 5;
		}			
		
	printf("\nMatriz B\n");	
	for(lin = 0;lin < 2;lin = lin + 1){
		for(col = 0;col < 5; col = col + 1)
			printf("%d ",b[lin][col]);
		printf("\n");
	}		
	
	printf("\nMatriz C\n");	
	for(lin = 0;lin < 2;lin = lin + 1){
		for(col = 0;col < 5; col = col + 1)
			printf("%d ",c[lin][col]);
		printf("\n");
	}			
	
	return 0;
}
