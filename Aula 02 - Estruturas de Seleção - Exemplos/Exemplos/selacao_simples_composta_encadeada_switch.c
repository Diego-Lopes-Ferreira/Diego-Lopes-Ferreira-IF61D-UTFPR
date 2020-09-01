#include <stdio.h>

int main(){
	int n = 0;
/* sele��o simples

if <condi��o>
  <comando(s)>

executa o comando ou os comandos SE a condi��o for VERDADEIRA	
	
caso haja apenas um comando, n�o h� a necessidade de
um bloco {   }

bloco � um conjunto de comandos delimitados por chaves { }	
*/
  if (n % 2 == 0){	
  	printf("\n.O numero %d eh ",n);
		printf("\n.PAR");
		printf("\n.A expressao n %% 2 == 0 e %d",n % 2 == 0);
	}
	
  if (n % 2 != 0){	
  	printf("\n.O numero %d eh ",n);
		printf("\n.IMPAR");
		printf("\n.A expressao n %% 2 != 0 e %d",n % 2 != 0);
	}	
	
/* sele��o composta

if <condi��o>
  <comando(s)>
  else
    <comando(s)>

executa o comando ou os comandos do primeiro bloco 
  SE a condi��o for VERDADEIRA	
executa o comando ou os comandos do ELSE (segundo bloco)
  SE a condi��o for FALSA  
	
caso haja apenas um comando, n�o h� a necessidade de
um bloco {   }

bloco � um conjunto de comandos delimitados por chaves { }	
*/  
	if (n % 2 == 0){	
  	printf("\n..O numero %d eh ",n);
		printf("\n..PAR");
		printf("\n..A expressao n %% 2 == 0 e %d",n % 2 == 0);
	}
	  else{	
  	  printf("\n..O numero %d eh ",n);
		  printf("\n..IMPAR");
		  printf("\n..A expressao n %% 2 == 0 e %d",n % 2 == 0);
	  }	

/* sele��o encadeada ou aninhada

if <condi��o>
  <comando(s)>
  else if <condi��o>
    <comando(s)>
    else if <condi��o>
      <comando(s)>
      ...
      else
        <comando(s)>

permite o encadeamento de uma s�rie de ifs
					
*/  

  if (n == 0){
		printf("\nZERO\n");
	}
	  else if (n % 2 == 0){	
  	  printf("\n..O numero %d eh ",n);
		  printf("\n..PAR");
		  printf("\n..A expressao n %% 2 == 0 e %d",n % 2 == 0);
	  }
	    else{	
  	    printf("\n..O numero %d eh ",n);
		    printf("\n..IMPAR");
		    printf("\n..A expressao n %% 2 == 0 e %d",n % 2 == 0);
	    }	
		
/* sele��o m�ltipla - SWITCH...CASE

permite a sele��o de apenas uma vari�vel, e n�o permite
a utiliza��o de express�es l�gicas

switch (vari�vel){
	case <valor da vari�vel>:
	  <comando(s)>
	  break;
	case <valor da vari�vel>:
	  <comando(s)>
	  break;
	case <valor da vari�vel>:
	  <comando(s)>
	  break;
  ...
	default:
	  <comando(s)>
	  break;
}					
*/  			
	n = 1;		
  switch(n){
		case 0:
			printf("\nZERO\n");
			break;
		case 1:
			printf("\nUM\n");
			break;
		case 2:
			printf("\nDOIS\n");
			break;
		case 3:
			printf("\nTRES\n");
			break;
		default:
			printf("\nMenor que 0 ou maior que 3\n");
			break;
	}						
			
	return 0;
}