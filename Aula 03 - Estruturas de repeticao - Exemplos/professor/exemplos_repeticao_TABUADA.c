#include <stdio.h>
int main(){
	int n , x;
	n = 2; 
         
/* *************************************************
SINTAXE do WHILE - executa os comandos enquanto a
                   condição for verdadeira.
                   Primeiro verifica a condição e depois
                   executa os comandos.
                   É executado 0 ou n vezes
 
  while <condição>
  {
    <comandos>
  }
	 
  executa os comendos ENQUANTO a condição for verdadeira
*/
	x = 1; //CONTADOR
         //contador é uma variável de controle
         //para uma estrutura de repetição
         //e é utilizado quando sabemos quantas
         //vezes a estrutura será executada
  while (x <= 10){
		printf("\n. %3d X %3d = %3d",n,x,n*x);
		x = x + 1;
	}	

/* *************************************************
SINTAXE do DO - executa os comandos enquanto a
                condição for verdadeira.
                Primeiro executa os comdandos e depois
                verifica a condição.
                É executado 1 ou n vezes.
 
  do 
  {
    <comandos>
  }while <condição>;
	 
  executa os comendos ENQUANTO a condição for verdadeira
*/
  x = 1;
  do{
		printf("\n.. %3d X %3d = %3d",n,x,n*x);
		x = x + 1;
	}while (x <= 10);			
	
/* *************************************************
SINTAXE do FOR - executa os comandos enquanto a
                 condição for verdadeira.
                 Primeiro verifica a condição e depois
                 executa os comandos.
                 É executado 0 ou n vezes
 
  for([inicialização varíavel controle];[condição];[inc/dec])
  {
    <comandos>
  }
  executa os comendos ENQUANTO a condição for verdadeira
*/
 
	for(x = 1;x <= 10;x = x + 1){
		printf("\n... %3d X %3d = %3d",n,x,n*x);
	}	
	
	return 0;
}





