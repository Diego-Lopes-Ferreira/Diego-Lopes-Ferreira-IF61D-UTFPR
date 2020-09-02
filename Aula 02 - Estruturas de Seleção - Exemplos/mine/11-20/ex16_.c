/*

  Escreva um programa que diga se uma capital brasileira é da região Nordeste ou Sudeste, de acordo
  com a opção digitada pelo usuário. No caso do usuário digitar o nome de uma capital que não esteja
  entre as opções, escreva que a capital é de outra região.
  ["Sao Luis", "Teresina", "Fortaleza", "Natal", "Joao Pessoa", "Recife", "Maceio", "Aracaju", "Salvador"]
  ["Sao Paulo", "Rio de Janeiro", "Espirito Santo", "Vitoria"]

  entradas:
    capital
  saidas:
    qual regiao faz parte
  processamento:
    para cada item da lista Nordeste:
      se capital == item:
        mostre na tela "NORDESTE"
        variavel feito = 1
    se feito == 0:
      para cada item da lista Sudeste:
        se capital == item:
          mostre na tela "NORDESTE"
          variavel feito = 1
    se feito == 0:
      mostre na tela "Outra regiao"
  
*/
#include <stdio.h>
#include <string.h>

int main() {
  printf("Regioes Sudeste e Nordeste \n");
  char userCapital[256];
  int feito = 0;
  int i; // contador

  char listaNordeste[][256] = {
    "aracaju",
    "fortaleza",
    "joao pessoa",
    "maceio",
    "natal",
    "recife",
    "salvador",
    "sao luis",
    "teresina",
  };
  char listaSudeste[][256] = {
    "espirito santo",
    "rio de janeiro",
    "sao paulo",
    "vitoria"
  };

  printf("Digite uma capital \n>>> ");
  fflush(stdin);
  gets(userCapital);

  printf("%s \n", strlwr(userCapital));
  for (i = 0; i < 9; i++) {
    //printf("Nordeste - %s \n", listaNordeste[i]);
    if (strcmp(strlwr(userCapital), listaNordeste[i]) == 0) {
      printf("Sua capital esta no Nordeste \n");
      feito = 1;
      break;
    }
    //printf("nao \n");
  }
  if (feito == 0) {
    for (i = 0; i < 4; i++) {
      //printf("Sudeste - %s \n", listaNordeste[i]);
      if (strcmp(strlwr(userCapital), listaSudeste[i]) == 0) {
        printf("Sua capital esta no Sudeste \n");
        feito = 1;
        break;
      }
      //printf("Nao \n");
    }
  }
  if (feito == 0)
    printf("Sua capital nao esta nem no sudeste nem no nordeste \n");

  return 0;
}