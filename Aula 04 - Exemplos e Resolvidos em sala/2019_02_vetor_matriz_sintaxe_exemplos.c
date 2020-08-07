/*
--VARI�VEL--
int x; -- DECLARA��O DE UMA VARI�VEL

x - armazena apenas um valor do tipo inteiro
    a cada instante do programa

x - � acessado de 4 formas:

1 - ler um valor para x:
    scanf("%d",&x);
2 - imprimir o valor de x:
    printf("%d",x);
3 - atribuir um valor para x:
    x = 13;
4 - utilizar x em uma express�o:
    a = x * 21;

Obs: SEMPRE acessamos uma vari�vel com
---- refer�ncia direta ao seu nome

********************

--VETOR--

- vari�vel unidimensional indexada homog�nea
- permite que mais de um valor do mesmo tipo
  seja armazenado
- utiliza um �ndice para acessar cada valor

declara��o:

int v[5]; -- <tipo> <nome>[<dimens�o>]

tipo - tipo de dado
nome - � o nome da vari�vel
dimens�o - � a quantidade de elementos
           da vari�vel

int v[5];
     0    1    2    3    4    <-- �ndices
  +----+----+----+----+----+
  |    |    |    |    |    |  <-- valores
  +----+----+----+----+----+

v pode armazenar at� cinco valores do tipo
inteiro

v - � acessado de 4 formas:

1 - ler um valor para v:
    scanf("%d",&v[0]); - est�tica
    scanf("%d",&v[i]); - din�mica
2 - imprimir o valor de v:
    printf("%d",v[0]); - est�tica
    printf("%d",v[i]); - din�mica
3 - atribuir um valor para v:
    v[0] = 13; - est�tica
    v[i] = 13 - din�mica
4 - utilizar v em uma express�o:
    a = v[0] * 21; - est�tica
    a = v[i] * 21; - din�mica
Obs: SEMPRE acessamos um vetor com
---- refer�ncia direta ao seu nome e ao
     valor do �ndice da posi��o na qual
     h� um valor armazenado

     for(i = 0;i < 5;i = i + 1)
       printf("%d

********************

--MATRIZ --

- vari�vel multidimensional indexada homog�nea
- permite que mais de um valor do mesmo tipo
  seja armazenado
- utiliza mais de um �ndice para acessar cada valor

declara��o:

int m[5][5]; -- <tipo> <nome>[<dimens�o linha>][<dimens�o coluna>]

tipo - tipo de dado
nome - � o nome da vari�vel
dimens�o linha - � a quantidade de linhas em uma matriz
dimens�o coluna - � a quantidade de colunas em uma matriz

int m[5][5];
     0    1    2    3    4    <-- �ndices das colunas
  +----+----+----+----+----+
 0|    |    |    |    |    |  <-- valores
  +----+----+----+----+----+
 1|    |    |    |    |    |  <-- valores
  +----+----+----+----+----+
 2|    |    |    |    |    |  <-- valores
  +----+----+----+----+----+
 3|    |    |    |    |    |  <-- valores
  +----+----+----+----+----+
 4|    |    |    |    |    |  <-- valores
  +----+----+----+----+----+
�ndices das linhas

m pode armazenar at� 25 valores do tipo
inteiro

m - � acessado de 4 formas:

1 - ler um valor para m:
    scanf("%d",&m[0][0]); - est�tica
    scanf("%d",&m[i][j]); - din�mica
2 - imprimir o valor de m:
    printf("%d",m[0][0]); ]- est�tica
    printf("%d",m[i][j]); - din�mica
3 - atribuir um valor para m:
    m[0][0] = 13; - est�tica
    m[i][j] = 13 - din�mica
4 - utilizar v em uma express�o:
    a = m[0][0] * 21; - est�tica
    a = m[i][j] * 21; - din�mica
Obs: SEMPRE acessamos uma matriz com
---- refer�ncia direta ao seu nome e ao
     valor do �ndice da linha e do �ndice
     da coluna na qual h� um valor armazenado

     for(i = 0;i < 5;i = i + 1){
       for(j = 0;j < 5;j = j + 1)
         printf("%d ",m[i][j])
		   printf("\n");
		 }
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define L 30

int main()
{
	int v[L];
	int m[L][L];
	int i, j, l, c, aux;

	srand(time(NULL));

	for(i = 0; i < L; i = i + 1) {
		//printf("\nDigite o valor para a posicao %d do vetor: ",i);
		//scanf("%d",&v[i]);
		v[i] = rand() / 1000;
	}

	printf("\n");
	for(i = 0; i < L; i = i + 1) {
		printf("%3d", v[i]);
	}
//m�todo da bolha de ordena��o
	for(i = 0; i < L-1; i++) {
		for(j = i + 1; j < L; j++) {
			if(v[i] > v[j]) {
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

	printf("\n");
	for(i = 0; i < L; i = i + 1) {
		printf("%3d", v[i]);
	}	

	for(l = 0; l < L; l = l + 1)
		for(c = 0; c < L; c = c + 1)
			m[l][c] = rand() / 1000;

	printf("\n\n");
	for(l = 0; l < L; l = l + 1) {
		for(c = 0; c < L; c = c + 1)
			printf("%3d", m[l][c]);
		printf("\n");
	}

	return 0;
}
