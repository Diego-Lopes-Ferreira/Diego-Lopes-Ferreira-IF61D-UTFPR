/*

  Calcular o volume de um cilindro.
  Perguntar ao usuário se há outros cálculos a serem realizados para continuar
  ou não o programa.


  entradas:

  saidas:

  processamento:
    repetir infinitamente
      perguntar ao usuario qual o raio do cilindro
      perguntar ao usuario qual a altura do cilindro
      calcular o volume = r*r*PI*h
      perguntar ao usuario se ele deseja continuar
*/
#include <stdio.h>
#include <string.h>

int pergunte() {
  char user[2];
  printf("\nDeseja continuar? \n[s/n]>>> ");
  fflush(stdin);
  gets(user);
  return (strcmp(strlwr(user), "s") == 0);
}

void calculaCilindro() {
  float r = 0, h = 0, PI = 3.1415, volume = 0;
  printf("Digite o raio da base       >>> ");
  scanf("%f", &r);
  printf("Digite a altura do cilindro >>> ");
  scanf("%f", &h);
  volume = r * r * PI * h;
  printf("Volume: %.2f \n", volume);
}

int main() {
  printf("Calculo de volume de cilindro \n");
  while (1) {
    calculaCilindro();
    if (pergunte() == 0) {
      printf("Exit \n");
      break;
    }
    printf("\nContinue \n\n");
  }
  return 0;
}