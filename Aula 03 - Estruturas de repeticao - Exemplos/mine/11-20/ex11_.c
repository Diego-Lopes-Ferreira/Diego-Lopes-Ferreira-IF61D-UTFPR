/*

  Obter um valor qualquer e perguntar ao usuario se este valor e em dolares ou
  em reais. Caso sejam dolares, converte-los para reais. Se forem reais,
  converte-los para dolares. Repetir a operacao ate que a soma dos valores
  informados seja maior do que 10.000,00.

  entradas:
    valor
  saidas:
    total somado
  processamento:

*/
#include <stdio.h>
#include <string.h>

int pergunte() {
  char user[256];
  printf(
      "\nOs valores digitados estao em Dolares ou Reais? \n[dolar/real]>>> ");
  fflush(stdin);
  gets(user);
  return (strcmp(strlwr(user), "dolar") == 0);
}

float converteParaReal(float dolar) {
  float real = dolar * 5.54;
  return real;
}
float converteParaDolar(float real) {
  float dolar = real / 5.54;
  return dolar;
}

int main() {
  float valor = 0, total = 0;

  while (1) {
    printf(">>> ");
    scanf("%f", &valor);
    total += valor;
    if (valor >= 10000) {
      break;
    }
  }

  if (pergunte() == 1)
    printf("U$ %.2f = R$ %.2f \n", total, converteParaReal(valor));
  else
    printf("R$ %.2f = U$ %.2f \n", total, converteParaDolar(valor));

  return 0;
}