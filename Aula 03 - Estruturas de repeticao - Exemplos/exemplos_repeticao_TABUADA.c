#include <stdio.h>
int main(){
	int n , x;
	n = 2; 
         
/* *************************************************
SINTAXE do WHILE - executa os comandos enquanto a
                   condi��o for verdadeira.
                   Primeiro verifica a condi��o e depois
                   executa os comandos.
                   � executado 0 ou n vezes
 
  while <condi��o>
  {
    <comandos>
  }
	 
  executa os comendos ENQUANTO a condi��o for verdadeira
*/
	x = 1; //CONTADOR
         //contador � uma vari�vel de controle
         //para uma estrutura de repeti��o
         //e � utilizado quando sabemos quantas
         //vezes a estrutura ser� executada
  while (x <= 10){
		printf("\n. %3d X %3d = %3d",n,x,n*x);
		x = x + 1;
	}	

/* *************************************************
SINTAXE do DO - executa os comandos enquanto a
                condi��o for verdadeira.
                Primeiro executa os comdandos e depois
                verifica a condi��o.
                � executado 1 ou n vezes.
 
  do 
  {
    <comandos>
  }while <condi��o>;
	 
  executa os comendos ENQUANTO a condi��o for verdadeira
*/
  x = 1;
  do{
		printf("\n.. %3d X %3d = %3d",n,x,n*x);
		x = x + 1;
	}while (x <= 10);			
	
/* *************************************************
SINTAXE do FOR - executa os comandos enquanto a
                 condi��o for verdadeira.
                 Primeiro verifica a condi��o e depois
                 executa os comandos.
                 � executado 0 ou n vezes
 
  for([inicializa��o var�avel controle];[condi��o];[inc/dec])
  {
    <comandos>
  }
  executa os comendos ENQUANTO a condi��o for verdadeira
*/
 
	for(x = 1;x <= 10;x = x + 1){
		printf("\n... %3d X %3d = %3d",n,x,n*x);
	}	
	
	return 0;
}





