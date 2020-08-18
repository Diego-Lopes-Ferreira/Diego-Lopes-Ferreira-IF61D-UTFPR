/*

Quais os valores armazenados em SOMA, NOME e TUDO, supondo-se que NUM, X, COR, DIA, TESTE
e TESTE2 valem, respectivamente, 5, 2, "AZUL", "TERÇA", FALSE e TRUE
a. NOME <- DIA
b. SOMA <- (NUM*2/X) + (X + 1)
c. TUDO <- NAO ((TESTE OU TESTE2) E (X <> NUM))

  entradas:
    -
  saidas:
    SOMA, NOME e TUDO
  processamento:
    NOME = DIA
    SOMA = (NUM*2/X) + (X + 1)
    TUDO = NAO ((TESTE OU TESTE2) E (X <> NUM))
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main () {
  int num = 5;
  int x = 2;
  char cor[5] = "AZUL";
  char dia[6] = "TERCA";
  int teste = false;
  int teste2 = true;
  
  char nome[6];
  strcpy(nome, dia);
  float soma = ((float)num * 2 / (float)x) + ((float)x + 1);
  //bool tudo = (!((teste || teste2) && (x <= num)));

  printf("nome = %s \n", nome);
  printf("soma = %.2f \n", soma);
  printf("tudo = %s \n", !((teste || teste2) && (x <= num)) ? "true" : "false");
  return 0;
}