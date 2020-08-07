#include <stdio.h>

int main(){
	int n = 0;
/* seleção simples

if <condição>
  <comando(s)>

executa o comando ou os comandos SE a condição for VERDADEIRA	
	
caso haja apenas um comando, não há a necessidade de
um bloco {   }

bloco é um conjunto de comandos delimitados por chaves { }	
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
	
/* seleção composta

if <condição>
  <comando(s)>
  else
    <comando(s)>

executa o comando ou os comandos do primeiro bloco 
  SE a condição for VERDADEIRA	
executa o comando ou os comandos do ELSE (segundo bloco)
  SE a condição for FALSA  
	
caso haja apenas um comando, não há a necessidade de
um bloco {   }

bloco é um conjunto de comandos delimitados por chaves { }	
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

/* seleção encadeada ou aninhada

if <condição>
  <comando(s)>
  else if <condição>
    <comando(s)>
    else if <condição>
      <comando(s)>
      ...
      else
        <comando(s)>

permite o encadeamento de uma série de ifs
					
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
		
/* seleção múltipla - SWITCH...CASE

permite a seleção de apenas uma variável, e não permite
a utilização de expressões lógicas

switch (variável){
	case <valor da variável>:
	  <comando(s)>
	  break;
	case <valor da variável>:
	  <comando(s)>
	  break;
	case <valor da variável>:
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