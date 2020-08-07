/*
31. Tendo como dados de entrada dois pontos quaisquer de um plano
cartesiano P(X1,Y1)e Q(X2,Y2) calcule e mostre a distância entre eles. 
A distância é dada pela fórmula:
raiz((X2 - X1)^2 + (Y2 - Y1)^2)

1 - entradas de dados:
  ponto x de P
  ponto y de P
  ponto x de Q
  ponto y de Q
2 - saídas de dados:
  distância entre P e Q
3 - processamento:
  obter os valores de x e y para P
	obter os valores de x e y para Q
	calcular a distância
	mostrar a distância calculada
4 - fórmulas:
raiz((x2 - x1)^2 + (y2 - y1)^2)

em linguagem C devemos utilizar a função pow(x,y).
pow elevada x a potência y

(x2 - x1)^2 --> pow(x2-x1,2.0)
	
(y2 - y1)^2 --> pow(y2-y1,2.0)

pow(pow(x2-x1,2.0) + pow(y2-y1,2.0),1.0/2.0) 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float x1, y1, x2, y2, d;
	printf("Informa os valores de x e y para o ponto P, separados por / ");
	scanf("%f/%f",&x1,&y1);
	printf("Informa os valores de x e y para o ponto Q, separados por / ");
	scanf("%f/%f",&x2,&y2);
	d = pow(pow(x2-x1,2.0) + pow(y2-y1,2.0),1.0/2.0);
	printf("\nA distancia entre P e Q e %10.2f\n",d);
	system("pause");	
	return 0;
}