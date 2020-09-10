/*
  Escreva um programa que receba dois números reais e execute as operações
  listadas a seguir, de acordo com a escolha do usuário.

  Se a opção digitada for inválida, mostre uma mensagem de erro e termine a
  execução do programa.

  Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.

  Use a estrutura switch...case para coordenar as escolhas do usuário.

  1 => media
  2 => Diferenca (maior - menor)
  3 => Produto
  4 => Divisao (primeiro / segundo)

  entradas:

  saidas:

  processamento:

*/
#include <stdio.h>

int pergunte() {
  int user = 0;
  printf(">>> ");
  scanf("%d", &user);
  if ((user != 1) && (user != 2) && (user != 3) && (user != 4)) {
    return 0;
  } else {
    return user;
  }
}

void selecao(int user, float n1, float n2) {
  switch (user) {
    case 1:
      printf("[1] A media entre %.2f e %.2f = %.2f \n", n1, n2,
             ((n1 + n2) / 2));
      break;
    case 2:
      if (n1 > n2)
        printf("[2] %.2f - %.2f = %.2f \n", n1, n2, (n1 - n2));
      else
        printf("[2] %.2f - %.2f = %.2f \n", n2, n1, (n2 - n1));
      break;
    case 3:
      printf("[3] %.2f x %.2f = %.2f \n", n1, n2, (n1 * n2));
      break;
    case 4:
      if (n2 != 0)
        printf("[4] %.2f / %.2f = %.2f \n", n1, n2, (n1 / n2));
      else
        printf("[4] Nao e possivel fazer divisao por zero \n");
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

  printf("=====Menu===== \n");
  printf("[1] media  \n");
  printf("[2] Diferenca \n");
  printf("[3] Produto \n");
  printf("[4] Divisao \n");
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