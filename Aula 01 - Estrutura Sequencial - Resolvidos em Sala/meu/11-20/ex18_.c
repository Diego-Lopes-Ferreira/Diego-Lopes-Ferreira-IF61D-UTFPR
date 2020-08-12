/*
Altere o programa do item 11 para que a pessoa possa informar os dados para as variáveis e depois
mostre os valores informados pela mesma. 


  entradas:
    inteiro a
    real b
    caracter c
  saidas:
    as tres variaveis
  processamento:
    perguntar um inteiro a
    perguntar um real b
    perguntar um caracter c
  
*/
#include <stdio.h>

int main () {
  int a;
  //a = 1;
  printf("Digite um numero inteiro \n>>> ");
  scanf("%d", &a);
  
  float b;
  printf("Digite um numero real \n(xx.xx)>>> ");
  //b = 1.0;
  scanf("%f", &b);

  char c[256];
  //strcpy(c, "sera que foi?");
  printf("Digite um texto \n>>> ");
  fflush(stdin);
  gets(c);

  printf("A = %d | B = %.2f | C = \"%s\" \n", a, b, c);  
  return 0;
}