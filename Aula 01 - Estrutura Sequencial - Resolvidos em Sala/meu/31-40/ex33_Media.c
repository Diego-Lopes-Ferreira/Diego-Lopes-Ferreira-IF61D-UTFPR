/*
  Calcular a média ponderada obtida por um aluno para 2 notas bimestrais


  entradas:
  float nota1 e nota2
  
  saidas:
  float media
  
  processamento:
  media = nota1 + nota2 / 2
  
*/
#include <stdio.h>

int main () {
  float bim1, bim2, mean;

  printf("==Calculo de notas== \n");
  
  printf("Primeiro Bimestre \n>>> ");
  scanf("%f", &bim1);

  printf("Segundo Bimestre \n>>> ");
  scanf("%f", &bim2);
  
  mean = (bim1 + bim2) / 2;

  printf("A media desses dois bimestres e: %.2f \n", mean);
  
  int showInfo;
  printf("\n\nWant to know more info?(y=1/n=0)>> ");
  scanf("%d", &showInfo);
  if(showInfo == 1) {
    printf("Bimestre 2 : %.2f h\n", bim1);
    printf("Bimestre 1 : %.2f h\n", bim2);
    printf("Media = (%.2f + %.2f) / 2 = %.2f \n", bim1, bim2, mean);    
  } else if(showInfo == 0) {
    printf("end \n");
  } else {
    printf("err \n");
  }
  
  return 0;
}