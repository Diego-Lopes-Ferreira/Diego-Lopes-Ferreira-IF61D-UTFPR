#include <stdio.h>
int main(){
//vari�veis 'simples'
//vari�vel como um espa�o na mem�ria que � referenciado por um nome
//ocupa um valor de um determinado tipo a cada instante em um programa
//por exemplo:
  int n;  //declara uma vari�vel de nome n, do tipo int (inteiro)
  n = 13; //atribui o valor 13 � vari�vel n
  scanf("%d",&n); //l� um valor do teclado para a vari�vel n
  printf("%d",n); //imprime na tela o valor da vari�vel n
  int a = n + 13; //n faz parte de uma express�o
//uma vari�vel SEMPRE � referenciada DIRETAMENTE por seu nome

//vari�veis 'compostas'
//VETORES s�o vari�veis compostas, indexadas e homog�neas
//um vetor ocupa MAIS de um espa�o na mem�ria, de um mesmo tipo
//  de acordo com sua DIMENS�O
//DIMENS�O � a quantidade de elementos de um vetor
  int v[10]; //declara uma vari�vel vetor chamada v, que pode
	           //armazenar 10 n�meros inteiros
//  v = 13; //erro
//	v = {1,2,3,4,5,6,7,8,9,10};	//� v�lida no momento da declara��o
	int vetor[10] = {1,2,3,4,5,6,7,8,9,10};		 
	
	v[0] = 133; //atribui o valor 133, ao vetor v, na posi��o 0
//para acessar um vetor utilizamos um �ndice, que indica em qual
//posi��o estamos realizando a manipula��o do mesmo
//  nomedovetor[posi��o]
//posi��o sempre come�a em 0(zero) em linguagem C
  scanf("%d",&v[1]); //l� um valor do teclado para a vari�vel v
                     //na posi��o 1
  printf("%d",v[2]); //imprime na tela o valor da vari�vel v na
                     //posi��o 2
  int b = v[3] + 13; //v[3] (v indexado por 3) faz parte de uma express�o  	
	  
//refer�ncia est�ticas
  scanf("%d",&v[0]);
  scanf("%d",&v[1]);
  scanf("%d",&v[2]);
//...
  scanf("%d",&v[9]);

//ou
  scanf("%d%d%d%d%d%d%d%d%d%d",&v[0],&v[1],&v[2],&v[3],&v[4],&v[5],&v[6],&v[7],&v[8],&v[9]);
	
//refer�ncias din�micas
  for(a = 0;a < 10;a = a + 1)
		scanf("%d",&v[a]); //a varia de 0 a 9	  
	  
  
//MATRIZES s�o vari�veis compostas, indexadas e homog�neas
//uma matriz ocupa MAIS de um espa�o na mem�ria, de um mesmo tipo
//  de acordo com suas DIMENS�ES
//as DIMENS�ES de uma matriz indicam seu tamanho
//normalmente trabalhamos com duas dimens�es: LINHAS e COLUNAS
  int m[4][4]; //declara uma matriz 4 x 4 de n�meros inteiros
               //a primeira dimens�o � quantidade de LINHAS
               //a segunda dimens�o � a quantidade de COLUNAS
  int lin, col;               
//refer�ncias din�micas
  for(lin = 0;lin < 4;lin = lin + 1)
  	for(col = 0;col < 4;col = col + 1)
		  scanf("%d",&m[lin][col]); 	  

//quando h� duas estruturas de repeti��o encadeadas/aninhadas
//para cada repeti��o do la�o externo, o la�o interno � executado
//completamente:
//lin  col
// 0    0
// 0    1
// 0    2
// 0    3
// 1    0
// 1    1
// 1    2
// 1    3
//...
// 3    3

	return 0;
}