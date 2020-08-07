#include "C:\Users\gcanh\OneDrive\Documentos\_material_para_aulas\_algoritmos\C\include\bibliotecas.h"
#include <stdio.h>

int main(){
	int p;
	printf("Informe um numero para verificar se o mesmo e primo ou nao: ");
	scanf("%d",&p);
	if (primo(p))
		printf("\nO numero %d e primo",p);
    else
		  printf("\nO numero %d nao e primo",p);
  return 0;		
}