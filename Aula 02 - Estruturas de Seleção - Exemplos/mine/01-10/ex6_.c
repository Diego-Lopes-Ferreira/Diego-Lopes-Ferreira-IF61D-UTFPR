/*
Para 2 números quaisquer, informar:
a) o maior
b) o menor
c) se são iguais


  entradas:
    n1, n2
  saidas:
    maior, menor (ou se sao iguais)
  processamento:
    se n1 == n2:
      fala que sao iguais
    senao, se n1 > n2:
      fala que o n1 e maior
    senao
      fala que o n2 e maior
*/
#include <stdio.h>

int main () {
  float n1, n2;

  printf("Digite 2 numeros separados por uma barra \n");
  scanf("%f/%f", &n1, &n2);

  if (n1 == n2) printf("Os dois numeros sao iguais \n");
  else if (n1 > n2) printf("%f e maior que %f \n", n1, n2);
  else printf("%f e maior que %f \n", n2, n1);
  
  return 0;
}