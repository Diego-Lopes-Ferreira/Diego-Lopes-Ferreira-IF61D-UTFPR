#include <stdio.h>
/*
1 - a �rea de um tri�ngulo
2 - a �rea de um c�rculo
3 - a �rea de um cubo
4 - a �rea de um cilindro
qualquer outro valor - mensagem de erro
*/
int main(){
  
	int op;
	
	printf("\n1 - a �rea de um tri�ngulo");
	printf("\n2 - a �rea de um c�rculo");
	printf("\n3 - a �rea de um cubo");
	printf("\n4 - a �rea de um cilindro\n");
	scanf("%d",&op);
		
	if(op == 1)
		printf("\n.triangulo\n");
	if(op == 2)
		printf("\n.circulo\n");
	if(op == 3)
		printf("\n.cubo\n");
	if(op == 4)
		printf("\n.cilindro\n");
	if((op < 1) || (op > 4))
		printf("\n.ERRO\n");
	
	if(op == 1)
		printf("\n..triangulo\n");
	  else if(op == 2)
		  printf("\n..circulo\n");
	    else if(op == 3)
		    printf("\n..cubo\n");
	      else if(op == 4)
		      printf("\n..cilindro\n");
          else 
						printf("\n..ERRO\n");
	
	switch(op){
    case 1:	
		  printf("\n...triangulo\n");
	    break;
		case 2:
		  printf("\n...circulo\n");
	    break;
	  case 3:
  		printf("\n...cubo\n");
	    break;
	  case 4:
		 	printf("\n...cilindro\n");
	    break;
	  default :
  		printf("\n...ERRO\n");
	}
	  
	return 0;
}