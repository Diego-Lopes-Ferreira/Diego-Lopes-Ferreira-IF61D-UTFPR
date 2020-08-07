/*
5.	Em uma eleição presidencial, existem quatro c&&idatos.  Os votos são
informados através de código.  Os dados utilizados para a escrutinagem
obedecem à seguinte codificação:
-	1,2,3,4 = voto para os respectivos candidatos;
-	5 = voto nulo;
-	6 = voto em branco;
Elabore um algoritmo que calcule e escreva:
-	total de votos para cada candidato;
-	total de votos nulos;
-	total de votos em branco;
-	percentual dos votos em branco e nulos sobre o total;
-	situação do candidato vencedor sobre os outros dois, no caso,
    se ele obteve ou não mais votos que os outros dois somados;
-	Como finalizador do conjunto de votos, tem-se o valor 0.
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
  setlocale(LC_ALL, "Portuguese");
  float v1 = 0, v2 = 0, v3 = 0, v4 = 0, vn = 0, vb = 0, vt = 0, vv = 0;
  int voto = -1;
  while (voto != 0) {
    printf("\n1 - candidato 1\n2 - candidato 2\n3 - candidato 3\n4 - candidato 4");
    printf("\n5 - voto nulo\n6 - voto em branco\n0 - finaliza");
    printf("\nDigite o número para o voto e pressione enter");
    printf("\nPara encerrar digite 0: ");
    scanf("%d",&voto);
  	switch (voto){
      case 1:
        v1 = v1 + 1;
        break;
      case 2:
	      v2 = v2 + 1;
	      break;
      case 3:
        v3 = v3 + 1;
        break;
      case 4:
	    v4 = v4 + 1;
	    break;
      case 5:
	    vn = vn + 1;
	    break;
      case 6:
	    vb = vb + 1;
	    break;
      default:
        printf("\nO valor digitado não está entre os valores permitidos\n");
        break;
	  }
	  system("cls");
  }
  vv = v1 + v2 + v3 + v4;
  vt = v1 + v2 + v3 + v4 + vn + vb;
  printf("\ntotal de votos válidos................... %5.0f", vv);
  printf("\ntotal de votos nulos..................... %5.0f", vn);
  printf("\ntotal de votos brancos................... %5.0f", vb);
  printf("\n                                         -------");
  printf("\ntotal de votos .......................... %5.0f", vt);
  printf("\n");
  printf("\nvotos no candidato 1 .................... %5.0f", v1);
  printf("\nvotos no candidato 2 .................... %5.0f", v2);
  printf("\nvotos no candidato 3 .................... %5.0f", v3);
  printf("\nvotos no candidato 4 .................... %5.0f", v4);
  printf("\nvotos nulos ............................. %5.0f", vn);
  printf("\nvotos em branco ......................... %5.0f", vb);
  printf("\n");
  printf("\n%% votos nulos sobre o total de votos..... %5.2f", (vn/vt)*100);
  printf("\n%% votos brancos sobre o total de votos... %5.2f", (vb/vt)*100);
  printf("\n%% candidato 1 sobre os votos válidos..... %5.2f", (v1/vv)*100);
  printf("\n%% candidato 2 sobre os votos válidos..... %5.2f", (v2/vv)*100);
  printf("\n%% candidato 3 sobre os votos válidos..... %5.2f", (v3/vv)*100);
  printf("\n%% candidato 4 sobre os votos válidos..... %5.2f", (v4/vv)*100);
  printf("\n");
  if ((v1 > v2) && (v1 > v3) && (v1 > v4)){
    printf("\no vencedor é o candidato 1 com %5.0f votos", v1);
    if (v1 > v2 + v3 + v4)
	  printf("\no candidato 1 teve mais votos (%5.0f) que os demais somados (%5.0f)", v1, v2 + v3 + v4);
	  else
		printf("\no candidato 1 não obteve mais votos que os demais somados");
  }
  if ((v2 > v1) && (v2 > v3) && (v2 > v4)){
    printf("\no vencedor é o candidato 2 com %5.0f votos", v2);
    if (v2 > v1 + v3 + v4)
	  printf("\no candidato 2 teve mais votos (%5.0f) que os demais somados (%5.0f)", v2, v1 + v3 + v4);
	  else
		printf("\no candidato 2 não obteve mais votos que os demais somados");
  }
  if ((v3 > v1) && (v3 > v2) && (v3 > v4)){
    printf("\no vencedor é o candidato 3 com %5.0f votos", v3);
    if (v3 > v1 + v2 + v4)
	  printf("\no candidato 3 teve mais votos (%5.0f) que os demais somados (%5.0f)", v3, v1 + v2 + v4);
	  else
		printf("\no candidato 3 não obteve mais votos que os demais somados");
  }
  if ((v4 > v1) && (v4 > v2) && (v4 > v3)){
    printf("\no vencedor é o candidato 4 com %5.0f votos", v4);
    if (v4 > v1 + v2 + v3)
	  printf("\no candidato 4 teve mais votos (%5.0f) que os demais somados (%5.0f)", v4, v1 + v2 + v3);
	  else
		printf("\no candidato 4 não obteve mais votos que os demais somados");
  }
  printf("\n");
return 0;
}
