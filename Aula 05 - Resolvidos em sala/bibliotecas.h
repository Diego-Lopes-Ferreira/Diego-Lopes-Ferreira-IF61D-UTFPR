#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <unistd.h>
void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}
void lerdoisnrs(float nr[]){
  printf("\nInforme o primeiro valor --> ");
	scanf("%f",&nr[0]);
  printf("\nInforme o segundo valor ---> ");
	scanf("%f",&nr[1]);		
}
float adicao(float x, float y){
	return x + y;
}
float subtracao(float x, float y){
	return x - y;
}
float multiplicacao(float x, float y){
	return x * y;
}
float divisao(float x, float y){
	if (y != 0)
    return x / y;
    else
      return 0;
}
float potencia(float x, float y){
	return pow(x,y);
}
float raiz(float x, float y){
	return pow(x,1.0/y);
}
int primo(int n){
	int x, s;
	x = n;
	s = 0;
	while (x > 0){
		if (n % x == 0)
			s = s + 1;
			if (s == 3)
				break;
    x = x - 1; 
	}
	if (s == 2)
		return 1;
	  else
		  return 0;
}
int fatorial(int num){
  int aux;
	aux = num - 1;
  while(aux > 1){
		num = num * aux;
		aux = aux - 1;
	}
	return num;
}
void PreencheVetorInt(int v[], int t){
	int i;
	srand(time(NULL));
	for(i = 0;i < t;i = i + 1){
    v[i] = rand()/100;
  }
}
void PreencheVetorFloat(float v[], int t){
	int i;
	srand(time(NULL));
	for(i = 0;i < t;i = i + 1){
    v[i] = rand()/100*M_PI;
  }
}
void ImprimeVetorInt(int v[], int t){
	int i;
	for(i = 0;i < t;i = i + 1){
    printf("%d ",v[i]);
	}
}
void ImprimeVetorFloat(float v[], int t){
	int i;
	for(i = 0;i < t;i = i + 1){
    printf("%f ",v[i]);
	}
}