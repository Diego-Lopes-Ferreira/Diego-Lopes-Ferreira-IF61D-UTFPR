/*
3. Calcular a média ponderada obtida por um aluno para 2 notas bimestrais.

entradas de dados: nota1, peso1, nota2, peso2
saídas de dados: média ponderada
processamento: media = ((nota1*peso1)+(nota2*peso2))/(peso1+peso2)

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL,"Portuguese");
  
  float n1, p1, n2, p2, media;
	
	printf("\nCalcula a média ponderada para duas notas\n");

	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite o peso da primeira nota: ");
	scanf("%f",&p1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	printf("Digite o peso da segunda nota: ");
	scanf("%f",&p2);
/*
	// OU
	
	printf("Digite a primeira nota e o seu peso, separados por / : ");
	scanf("%f/%f",&n1,&p1);
	printf("Digite a segunda nota e o seu peso, separados por / : ");
	scanf("%f/%f",&n2,&p2);
  
	// OU

	printf("Digite na sequencia nota1-peso1-nota2-peso2 :");
	scanf("%f-%f-%f-%f",&n1,&p1,&n2,&p2);
*/	  
  
  media = ((n1 * p1) + (n2 * p2)) / (p1 + p2);
  
  printf("\nA média é %0.2f",media);  
  
  return 0;
}
