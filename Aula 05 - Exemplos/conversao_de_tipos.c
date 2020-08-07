/*TIPOS DE DADOS EM C

Tipo de dado	      Significado	                 Tamanho (em bytes)	          Intervalo de valores aceitos
char                Caractere	                   1                                        -128 a 127
unsigned char	      Caractere não sinalizado	   1	                                         0 a 255
short int	          Inteiro curto	               2                                     -32 768 a 32 767
unsigned short int	Inteiro curto não sinalizado 2	                                         0 a 65 535
int	                Inteiro	                     2 (no processador de 16 bits)         -32 768 a 32 767
                                                 4 (no processador de 32 bits)	-2 147 483 648 a 2147 483 647
unsigned int	      Inteiro não sinalizado       2 (no processador de 16 bits)               0 a 65 535 
                                                 4 (no processador de 32 bits)	             0 a 4 294 967 295
long int	          Inteiro longo	               4	                            -2 147 483 648 a 2 147 483 647
unsigned long int	  Inteiro longo não assinado	 4	                                         0 a 4 294 967 295
float	              Flutuante (real)	           4                                  3.4*10^-38 a 3.4*10^38
double	            Flutuante duplo	             8	                               1.7*10^-308 a 1.7*10^308
long double	        Flutuante duplo longo	      10	                              3.4*10^-4932 a 3.4*10^4932
*/

#include <stdio.h>

int main ()
{
/* CONVERSÃO DE TIPOS DE DADOS IMPLÍCITA

Dos tipos menores para os tipos Maiores

char ---> int
int ----> long int
float --> double
*/	
	
  int a;
  char b;
  
  b = 'B';
  
  printf("\n\nConversao de tipos implicita\n\n");
  
	printf ("\nnr de bytes da variavel b = %d", sizeof (b));
  printf ("\nconteudo da variavel b = %d\n", b);
  
	a = b;
  
	printf ("\nnr de bytes da variavel a = %d", sizeof (a));
  printf ("\nconteudo da variavel a = %d", a);

/* CONVERSÃO DE TIPOS DE DADOS EXPLÍCITA
	
de qualquer tipo para qualquer outros tipos maiores, utilizando cast (modeladores)

int -----> char
int -----> short int
double --> float	
*/	

   a = 359;
  
   printf("\n\nConversao de tipos explicita\n\n"); 
  
	 printf ("\nnr de bytes da variavel a = %d", sizeof (a));
   printf ("\nconteudo da variavel a = %d\n", a);
  
	 b = (char)a;
  
	 printf ("\nnr de bytes da variavel b = %d", sizeof (b));
   printf ("\nconteudo da variavel b = %d", b);
	 	  
	return 0;
}