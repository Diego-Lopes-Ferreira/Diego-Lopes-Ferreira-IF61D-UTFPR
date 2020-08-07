#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct e{
	int codigo;
	char nome[50];
	float potencia;
	float consumo;
	int tempoativo;
};

typedef struct e equipamento;

float calculaconsumo(float,int);
void preenche(equipamento[],int);
void relatorio(equipamento[],int,char[]);
//nas funções de ordenação o último parâmetro indica a ordem
//1 ordem crescente e dois ordem decrescente
void ordena_potencia(equipamento[],int,int);
void ordena_nome(equipamento[],int,int);

#define Q 3

int main(){
	
	char cabecalho[50];
	
	equipamento L[Q];
	preenche(L,Q);
	strcpy(cabecalho,"Sem ordenacao");
	relatorio(L,Q,cabecalho);
	ordena_potencia(L,Q,1); //1 ordena crescente e 2 ordena decrescente
	strcpy(cabecalho,"Ordenado por potencia");	
	relatorio(L,Q,cabecalho);
	ordena_nome(L,Q,2);//1 ordena crescente e 2 ordena decrescente
	strcpy(cabecalho,"Ordenado por nome");	
	relatorio(L,Q,cabecalho);
	
	return 0;
}

void preenche(equipamento lista[],int qtd){
	int i;
	srand(time(NULL));
	for(i = 0;i < qtd;i = i + 1){
		lista[i].codigo = i + rand() + 1;
		printf("informe o nome do equipamento: ");
		fflush(stdin);
		gets(lista[i].nome); //lê toda a string
		printf("informe a potencia em watts do equipamento: ");
		scanf("%f",&lista[i].potencia);
		printf("informe o tempo ativo do equipamento: ");
		scanf("%d",&lista[i].tempoativo);
		lista[i].consumo = calculaconsumo(lista[i].potencia, lista[i].tempoativo);
	}
}	

void relatorio(equipamento lista[],int qtd, char texto[]){
	int i;
  printf("\n\n--------- %s ---------\n",texto);	
	for(i = 0;i < qtd;i = i + 1){
    printf("\n----------------------------------"); 	  
    printf("\nCodigo ------> %d",lista[i].codigo);
		printf("\nNome --------> %s",lista[i].nome);
		printf("\nPotencia ----> %2.2f",lista[i].potencia);
		printf("\nTempo Ativo -> %d",lista[i].tempoativo);
		printf("\nConsumo -----> %2.2f",lista[i].consumo);
	}
}	
	
float calculaconsumo(float p, int ta){
	return (p * (ta / 60 * 30) / 1000);
}

//1 ordem crescente e dois ordem decrescente
void ordena_potencia(equipamento lista[], int qtd, int ordem){
	int i, j;
	equipamento aux;
	for(i = 0; i < qtd - 1; i++){
    for(j = i + 1; j < qtd; j++){
    	if(ordem == 1){
        if(lista[i].potencia > lista[j].potencia){
          aux = lista[i];
          lista[i] = lista[j];
          lista[j] = aux;
        }
      }
      else if (ordem == 2){
        if(lista[i].potencia < lista[j].potencia){
          aux = lista[i];
          lista[i] = lista[j];
          lista[j] = aux;
        }
			}
   }
 }
}

//1 ordem crescente e dois ordem decrescente
void ordena_nome(equipamento lista[], int qtd, int ordem){
	int i, j;
	equipamento aux;
	for(i = 0; i < qtd - 1; i++){
    for(j = i + 1; j < qtd; j++){
    	if(ordem == 1){
        if(lista[i].nome < lista[j].nome){
          aux = lista[i];
          lista[i] = lista[j];
          lista[j] = aux;
        }
      }
      else if (ordem == 2){
        if(lista[i].nome > lista[j].nome){
          aux = lista[i];
          lista[i] = lista[j];
          lista[j] = aux;
        }
     }
   }
 }
}