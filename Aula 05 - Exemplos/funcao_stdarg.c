/* Calcula a soma de n inteiros   */
/* o ultimo argumento deve ser 0 */
#include <stdio.h>
#include <stdarg.h>

int soma(int,...);

int main() {

	printf("\nsoma(1,2,3,4,5,6,7,8,9,0) --> %d\n",soma(1,2,3,4,5,6,7,8,9,0));	
	printf("\nsoma(1,2,3,4,5,0) --> %d\n",soma(1,2,3,4,5,0));	
	printf("\nsoma(1,2,0) --> %d\n",soma(1,2,0));	
	
  return 0;
}

int soma(int n1, ...) {
  va_list pa; //pa � uma lista que cont�m todos os par�metros que a fun��o ir� receber
  int som, n; 
  
  som = n1; //n1 � o primeiro argumento da lista de par�metros que a fun��o recebeu
            //portanto n1 � p �ltimo argumento conhecido, uma vez que � o �nico que 
            //foi recebibo em uma 'vari�vel'
            
	va_start(pa, n1); //inicializa a lista pa com os argumentos recebidos, indicando
	                  //que o primeiro valor da mesma � determinado pelo valor de n1
	                  
  while( (n = va_arg(pa, int)) != 0) //n recebe o primeiro valor ap�s o 
	   som = som + n;                  //�ltimo valor conhecido (inicialmente n1), e depois
	                                   //aponta para o pr�ximo valor
  	                                 //os n�meros lidos devem ser todos do tipo 
																		 //definido na chamada da fun��o, neste caso inteiro
    
	va_end(pa); //finaliza a lista que foi criada com va_start
  
  return som;
} 

