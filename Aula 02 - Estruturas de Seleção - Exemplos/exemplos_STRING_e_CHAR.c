#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	//char --> armazena 1 caracter
	//char pode ser inicializado na declara��o com ' '
	//char pode ser comparado diretamente em express�o com ==, !=, ...
	//char pode receber valor com comando de atribui��o no programa
	char n = 'a';
	
	if (n == 'a')
		printf("\nOK\n");
	
	n = 'b';
	
	//string --> composi��o de v�rios char
	//           armazena mais de um caracter
	//           o �ltimo caracter sempre � '\0'
	//string pode ser inicializada na declara��o com " " ou
	//       com {' ',' ',...}
	//string n�o pode ser comparada diretamente com ==, !=, ...
	//       necessita que sejam utilizadas fun��es de <string.h>
	//string n�o pode receber valor com comando de atribui��o
	//       necessita que sejam utilizadas fun��es de <string.h>
	//ENTRE ASPAS " " --> string
	//ENTRE AP�STROFO	' ' --> char
	//string � um vetor de char
	
  char nome[50] = "Jo�o";
  char nome1[50] = {'A','n','t','o','n','i','o','\0'};
  
  if(nome == "Jo�o")   //ERRO
  	printf("\nOK\n");
	
	if(strcmp(nome,"Jo�o") == 0) //CORRETO
		printf("\nOK\n");
			
//a fun��o strcmp(char,char) compara o conte�do do primeiro char com o
//segundo char. Se forem iguais o resultado � 0 (zero)	
	
//	nome = "Carlos"; //ERRO
	
	strcpy(nome,"Carlos"); //CORRETO
	
//a fun��o strcpy(char,char) copia o conte�do do segundo char para 
//a vari�vel que est� no primeiro char	

//------------------------------------------------	
	char sexo; 
	
	printf("\nDigite F para feminino ou M para masculino: ");
	fflush(stdin);
	scanf("%c",&sexo);
	
	if ((sexo = 'F') || (sexo = 'f')) ...
		
//ou

  switch(sexo){
		case 'F': case 'f':
			 .....
			 break;
		
	}		
		
//------------------------------------------------			
	char sexo[20];
	
	printf("\nDigite Feminino ou Masculino: ");
	fflush(stdin);
	gets(sexo);
	
	if (strcmp(strupr(sexo),"FEMININO") == 0) ...
	
//n�o � poss�vel com switch		
		
//------------------------------------------------	
  int sexo;
	
	printf("\nDigite 1 para FEMININO ou 2 para MASCULINO: ");
	scanf("%d",&sexo);
	
	if(sexo == 1) ...	
	
//ou

  switch(sexo){
		case 1:
			 ....
			 break;
		 
	}	
	
//------------------------------------------------		
	
	return 0;
}