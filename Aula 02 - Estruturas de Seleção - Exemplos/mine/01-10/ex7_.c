/*
 Obter um valor qualquer e perguntar ao usuário se este valor é em dólares ou em reais. Caso sejam
dólares, convertê-los para reais. Se forem reais, convertê-los para dólares.


  entradas:
    valor, reais ou dolares
  saidas:
    reais e dolares daquele valor
  processamento:
    pega o valor -> userValue
    pergunta se e em dolar ou real a entrada
    se for em real:
      real = user;
      dolar = user / cotacao);
    senao
      dolar = user;
      real = user * cotacao;
*/
#include <stdio.h>
#include <string.h>

int pergunte(char pergunta[256]) {
  char user[4];
  printf("%s \n[dolar / real]>>>", pergunta);
  fflush(stdin);
  gets(user);
  //printf("%s \n", user);
  return (strcmp(strlwr(user), "real") == 0);
}

int main () {
  float dolar=0, real=0, user=0, cotacao=5.36;

  printf("Digite quanto voce tem na carteira \n>>>");
  scanf("%f", &user);

  if (pergunte("Esse valor esta em dolares ou reais?")) {
    real = user;
    dolar = user / cotacao;
    printf("R$ %.2f = U$ %.2f \n", real, dolar);
  } else {
    dolar = user;
    real = user * cotacao;
    printf("U$ %.2f = R$ %.2f \n", dolar, real);
  }


  return 0;
}