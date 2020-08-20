/*
3. Calcular a média ponderada obtida por um aluno para 2 notas bimestrais.

  entradas:
    media 1, peso 1, media 2, peso 2

  processamento:
    media final = ((media1 * peso 1) + (media 2 * peso 2)) / (peso 1 + peso 2) 
  
  saida:
    media final
*/

#include <stdio.h>
int main () {
  //Declaracao de variaveis:
  int p1, p2;
  float m1, m2, mf;

  //Entrada de dados:
  printf("Coloque a media do semestre 1 e o seu peso (Separada por um ESPACO): ");
  scanf("%f%i", &m1, &p1);
  printf("Coloque a media do semestre 2 e o seu peso (Separada por um ESPACO): ");
  scanf("%f%i", &m2, &p2);

  //Processamento:
  mf = ((m1 * p1) + (m2 * p2)) / (p1 + p2);

  //Saida de dados:
  printf("Media final: %.2f", mf);

  return 0;
}
