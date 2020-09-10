/*
  Escreva um programa que receba dois números reais e execute uma das operações
  listadas a seguir, de acordo com a escolha do usuário. Se for digitada uma
  opção inválida, mostre mensagem de erro e termine a execução do programa. As
  opções são:

  a) O primeiro número elevado ao segundo número.
  b) Raiz quadrada de cada um dos números.
  c) Raiz cúbica de cada um dos números.

  Use a estrutura switch...case para coordenar as escolhas do usuário


  entradas:

  saidas:

  processamento:

*/
#include <math.h>
#include <stdio.h>
#include <string.h>

int pergunte() {
  char user[2];
  printf(">>> ");
  fflush(stdin);
  gets(user);
  if (strcmp(strlwr(user), "a") == 0)
    return 1;
  else if (strcmp(strlwr(user), "b") == 0)
    return 2;
  else if (strcmp(strlwr(user), "c") == 0)
    return 3;
  else
    return 0;
}

void selecao(int user, float n1, float n2) {
  switch (user) {
    case 1:
      printf("[1] %.2f elevado a %.2f = %.2f \n", n1, n2, pow(n1, n2));
      break;
    case 2:
      printf("[2] Raiz quadrada de %.2f = %.2f \n", n1, sqrt(n1));
      printf("    Raiz quadrada de %.2f = %.2f \n", n2, sqrt(n2));
      break;
    case 3:
      printf("[3] Raiz cubica de %.2f = %.2f \n", n1, pow(n1, 1.0 / 3.0));
      printf("    Raiz cubica de %.2f = %.2f \n", n2, pow(n2, 1.0 / 3.0));
      break;
    default:
      break;
  }
}

int main() {
  float n1 = 0, n2 = 0;
  int user = 0;

  printf("Digite um numero \n>>> ");
  scanf("%f", &n1);
  printf("Digite outro numero \n>>> ");
  scanf("%f", &n2);

  printf("==========Menu=============== \n");
  printf("[a] Um numero elevado ao outro  \n");
  printf("[b] Raiz quadrada dos numeros \n");
  printf("[c] Raiz cubica dos numeros \n");
  printf("Escolha uma opcao valida \n");

  while (1) {
    user = pergunte();
    if (user == 0)
      printf("Resposta invalida \n");
    else {
      selecao(user, n1, n2);
      break;
    }
  }
  return 0;
}