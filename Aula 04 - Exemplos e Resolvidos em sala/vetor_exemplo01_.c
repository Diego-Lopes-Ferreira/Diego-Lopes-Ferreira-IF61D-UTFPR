#include <stdio.h>
int main(){
//variáveis 'simples'
//variável como um espaço na memória que é referenciado por um nome
//ocupa um valor de um determinado tipo a cada instante em um programa
//por exemplo:
  int n;  //declara uma variável de nome n, do tipo int (inteiro)
  n = 13; //atribui o valor 13 à variável n
  scanf("%d",&n); //lê um valor do teclado para a variável n
  printf("%d",n); //imprime na tela o valor da variável n
  int a = n + 13; //n faz parte de uma expressão
//uma variável SEMPRE é referenciada DIRETAMENTE por seu nome

//variáveis 'compostas'
//VETORES são variáveis compostas, indexadas e homogêneas
//um vetor ocupa MAIS de um espaço na memória, de um mesmo tipo
//  de acordo com sua DIMENSÃO
//DIMENSÃO é a quantidade de elementos de um vetor
  int v[10]; //declara uma variável vetor chamada v, que pode
	           //armazenar 10 números inteiros
//  v = 13; //erro
//	v = {1,2,3,4,5,6,7,8,9,10};	//é válida no momento da declaração
	int vetor[10] = {1,2,3,4,5,6,7,8,9,10};		 
	
	v[0] = 133; //atribui o valor 133, ao vetor v, na posição 0
//para acessar um vetor utilizamos um índice, que indica em qual
//posição estamos realizando a manipulação do mesmo
//  nomedovetor[posição]
//posição sempre começa em 0(zero) em linguagem C
  scanf("%d",&v[1]); //lê um valor do teclado para a variável v
                     //na posição 1
  printf("%d",v[2]); //imprime na tela o valor da variável v na
                     //posição 2
  int b = v[3] + 13; //v[3] (v indexado por 3) faz parte de uma expressão  	
	  
//referência estáticas
  scanf("%d",&v[0]);
  scanf("%d",&v[1]);
  scanf("%d",&v[2]);
//...
  scanf("%d",&v[9]);

//ou
  scanf("%d%d%d%d%d%d%d%d%d%d",&v[0],&v[1],&v[2],&v[3],&v[4],&v[5],&v[6],&v[7],&v[8],&v[9]);
	
//referências dinâmicas
  for(a = 0;a < 10;a = a + 1)
		scanf("%d",&v[a]); //a varia de 0 a 9	  
	  
  
//MATRIZES são variáveis compostas, indexadas e homogêneas
//uma matriz ocupa MAIS de um espaço na memória, de um mesmo tipo
//  de acordo com suas DIMENSÕES
//as DIMENSÕES de uma matriz indicam seu tamanho
//normalmente trabalhamos com duas dimensões: LINHAS e COLUNAS
  int m[4][4]; //declara uma matriz 4 x 4 de números inteiros
               //a primeira dimensão é quantidade de LINHAS
               //a segunda dimensão é a quantidade de COLUNAS
  int lin, col;               
//referências dinâmicas
  for(lin = 0;lin < 4;lin = lin + 1)
  	for(col = 0;col < 4;col = col + 1)
		  scanf("%d",&m[lin][col]); 	  

//quando há duas estruturas de repetição encadeadas/aninhadas
//para cada repetição do laço externo, o laço interno é executado
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