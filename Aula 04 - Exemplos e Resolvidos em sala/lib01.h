#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void preenche(int v[],int tam){
	int i = 0, j, x, n;
  while (i <= tam){
    x = rand()/1000;
    n = 0;
    for(j = 0; j < i; j++)
      if (v[j] == x){
        n = 1;
        j = i + 1;
      }
     if (n == 0) {
      v[i] = x;
      i++;
    }
  }
}
void imprime(int v[], int tam, char texto[]){
	int i;
	printf("\n%s\n",texto);
	for(i = 0;i < tam;i = i + 1){
		printf("%d ",v[i]);
	}
}