#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct n{
	char nome[50];
	float n1, n2, n3, n4, media;
};

typedef struct n nota;

int main(){
		
	char nomes[5][15] = {"Joao","Maria","Francisco","Carlos","Fatima"};
	char sobrenomes[5][15] = {"Dos Santos","Da Silva","Aparecido","Moraes","Bezerra"};
	nota alunos[20];
	int i, j;
	
	srand(time(NULL));
	
	for(i = 0;i < 20;i = i + 1){
		do{
			j = rand()/1000;
		}while(j >= 5);
		
		memset(alunos[i].nome, '\0', sizeof(alunos[i].nome));
		
		strcat(alunos[i].nome,nomes[j]);
		strcat(alunos[i].nome," ");
		
		do{
			j = rand()/1000;
		}while(j >= 5);
		strcat(alunos[i].nome,sobrenomes[j]);
		
		do{
			alunos[i].n1 = rand()/1000;
		}while(alunos[i].n1 > 10);
		do{
			alunos[i].n2 = rand()/1000;
		}while(alunos[i].n2 > 10);
		do{
			alunos[i].n3 = rand()/1000;
		}while(alunos[i].n3 > 10);
		do{
			alunos[i].n4 = rand()/1000;
		}while(alunos[i].n4 > 10);
		alunos[i].media = (alunos[i].n1 + 
		                   alunos[i].n2 +
		                   alunos[i].n3 +
		                   alunos[i].n4) / 4;		
	}
	
	

/*		
	for(i = 0;i < 20;i = i + 1){
		printf("Digite o nome do aluno: ");
		fflush(stdin);
		gets(alunos[i].nome);
		printf("\nDigite as quatro notas separadas por ENTER\n");
		scanf("%f%f%f%f",&alunos[i].n1,
		                 &alunos[i].n2,
		                 &alunos[i].n3,
		                 &alunos[i].n4);
		alunos[i].media = (alunos[i].n1 + 
		                   alunos[i].n2 +
		                   alunos[i].n3 +
		                   alunos[i].n4) / 4;
	}      
*/	
	for(i = 0;i < 20;i = i + 1){
		printf("\nAluno: %s", alunos[i].nome);
		printf("\nn1\tn2\tn3\tn4");
		printf("\n%0.1f\t%0.1f\t%0.1f\t%0.1f", alunos[i].n1, 
		                                    alunos[i].n2,
																				alunos[i].n3,
																				alunos[i].n4);
    printf("\nMedia --> %0.1f",alunos[i].media);
		printf("\n--------------------------------------------");
	}																				

	return 0;
}