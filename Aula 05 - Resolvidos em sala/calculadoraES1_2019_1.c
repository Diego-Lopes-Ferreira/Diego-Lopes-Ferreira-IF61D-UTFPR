/*
Escrever um programa para uma calculadora que realize as seguintes opera��es:

1 - adi��o
2 - subtra��o
3 - multiplica��o
4 - divis�o
5 - pot�ncia (x elevado a y)
6 - raiz (x raiz de y)

Cada uma das opera��es deve ser realizada atrav�s de uma fun��o.

As fun��es devem estar inclu�das em um arquivo HEADER (.h).

*/
#include "C:\Users\gcanh\OneDrive\Documentos\_material_para_aulas\_algoritmos\C\include\bibliotecas.h"
#include <conio.h>

int main(){
	char op;
	float nrs[2];
	op = '0';
	while(op != '7'){
	  printf("\nCalculadora");
	  printf("\n-----------");   
	  printf("\nEscolha a operacao:");
	  printf("\n1 - adicao");
	  printf("\n2 - subtracao");
	  printf("\n3 - multiplicacao");
	  printf("\n4 - divisao");
	  printf("\n5 - potencia");
	  printf("\n6 - raiz");
	  printf("\n7 - sair");
	  printf("\n---> ");
	  fflush(stdin);
		scanf("%c",&op);
	  switch(op){
		  case '1':
		  	lerdoisnrs(nrs);
			  printf("\nA adicao e %2.2f",adicao(nrs[0],nrs[1]));
		    break;
  		case '2':
 		  	lerdoisnrs(nrs); 			
	  		printf("\nA subtracao e %2.2f",subtracao(nrs[0],nrs[1]));
		    break;
		  case '3':
		  	lerdoisnrs(nrs);		  	
			  printf("\nA multiplicacao e %2.2f",multiplicacao(nrs[0],nrs[1]));
		    break;
  		case '4':
 		  	lerdoisnrs(nrs); 			
	  		printf("\nA divisao e %2.2f",divisao(nrs[0],nrs[1]));
		    break;
		  case '5':
		  	lerdoisnrs(nrs);		  	
			  printf("\nA potencia e %2.2f",potencia(nrs[0],nrs[1]));
  		  break;
	  	case '6':
		  	lerdoisnrs(nrs);	  		
		  	printf("\nA raiz e %2.2f",raiz(nrs[0],nrs[1]));
		    break;
	  }
	}
  return 0;	
}