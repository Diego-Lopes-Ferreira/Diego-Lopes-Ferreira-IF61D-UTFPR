/*
16 - Escreva um programa que calcule e escreva o valor de S onde:

     1     2     3     4     5     6        -10
S = --- - --- + --- - --- + --- - --- ... + ---
     1     4     9     16    25    36       100

*/
#include <stdio.h>
int main(){
	float x, s;
	int sinal;
	s = 0;
	x = 1;
	sinal = 1;
	while(x < 10){
		s = s + (x / (x * x)) * sinal;
		sinal = sinal * -1;
		x = x + 1;
	}
	s = s + (-x / (x * x));
	printf("\nS --> %f\n",s);	
	return 0;
}