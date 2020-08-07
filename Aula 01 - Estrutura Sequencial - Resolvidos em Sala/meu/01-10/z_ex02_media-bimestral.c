/*
2. Calcular a média final obtida por um aluno, para 4 notas bimestrais.

  entradas:
    n1, n2, n3, n4
  
  saida:
    media
  
  processamento:
    obter nota 1
    obter nota 2
    obter nota 3
    obter nota 4
    fazer a media:
      (n1 + n2 + n3 + n4) / 4 = media
*/
#include <stdio.h>
int main(){
  //Declaracao das variaveis:
  float n11, n12, n13, n14, n21, n22, n23, n24, media1, media2;

  //Entrada de dados:
  //Versao completa:
  printf("Versao completa:\n\n");

  printf("Digite a nota do 1 bimestre: ");
  scanf("%f", &n11);

  printf("Digite a nota do 2 bimestre: ");
  scanf("%f", &n12);

  printf("Digite a nota do 3 bimestre: ");
  scanf("%f", &n13);
  
  printf("Digite a nota do 4 bimestre: ");
  scanf("%f", &n14);
  
  //Processamento:
  media1 = (n11 + n12 + n13 + n14) / 4; 
 
  /*
    O operador "=" e um comando de atribuicao
    Resolve a expressao da direita e ATRIBUI para a variavel do lado esquerdo
  */
/*
  //Saida de dados versao completa:
  printf("\n\n");
  printf("Nota 1: %.2f\n", n11);
  printf("Nota 2: %.2f\n", n12);
  printf("Nota 3: %.2f\n", n13);
  printf("Nota 4: %.2f\n", n14);
  printf("\nMedia final: %.2f\n\n", media1);
  
  printf("- - - - - - - - - - - - - - - - - - -\n"); */
  //Versao encurtada:
  //printf("Versao encurtada:\n\n");
  printf("Digite as 4 notas separadas por ESPACO :");
  scanf("%f%f%f%f", &n21, &n22, &n23, &n24);
  printf("\n");

  //Processamento:
  media2 = (n21 + n22 + n23 + n24) / 4;

  //Saida de dados versao encurtada:
  printf("Nota 1: %.2f\n", n21);
  printf("Nota 2: %.2f\n", n22);
  printf("Nota 3: %.2f\n", n23);
  printf("Nota 4: %.2f\n", n24);
  if(media2 >= 6.0){
    printf("\nVOCE PASSOU, media: %.2f\n\n\n", media2);
  }else{
    printf("\nVOCE NAO PASSOU, media: %.2f\n\n\n", media2);
  }

  return 0;
}
