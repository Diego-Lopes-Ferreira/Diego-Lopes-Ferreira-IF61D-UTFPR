/*

  Diego Lopes Ferreira
  RA: 2267241

  Questão 01

  Escreva um programa que receba dois números reais e execute as operações
  listadas a seguir, de acordo com a escolha do usuário. Se a opção digitada for
  inválida, mostre uma mensagem de erro e termine a execução do programa.
  Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.
  Use a estrutura switch...case para coordenar as escolhas do usuário.

  1 – Média entre os números digitados
  2 – Diferença do maior pelo menor
  3 – Produto entre os números digitados
  4 – Divisão do primeiro pelo segundo


  entradas:
    dois numeros reais e a decisao
  saidas:
    o que o usuario selecionar
  processamento:
    ler os dois numeros
    perguntar qual a selecao
    selecionar a decisao:
      caso seja 1:
        mostre( (n1 + n2) / 2)
      caso seja 2:
        se n1 > n2:
          mostre( n1 - n2 )
        senao:
          mostre( n2 - n1 )
      caso seja 3:
        mostre( n1 * n2 )
      caso seja 4:
        se n2 !=0:
          mostre( n1 / n2 )
        senao:
          mostre(Divisao por zero...)
*/
#include <stdio.h>

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

  printf(">>> ");
  scanf("%d", &user);
  if ((user == 1) || (user == 2) || (user == 3) || (user == 4)) {
    printf("[%d] ", user);
    switch (user) {
      case 1:
        printf("A media entre %.2f e %.2f", n1, n2);
        printf(" = %.2f  \n", ((n1 + n2) / 2));
        break;
      case 2:
        if (n1 > n2)
          printf("%.2f - %.2f = %.2f \n", n1, n2, (n1 - n2));
        else
          printf("%.2f - %.2f = %.2f \n", n2, n1, (n2 - n1));
        break;
      case 3:
        printf("%.2f x %.2f = %.2f \n", n1, n2, (n1 * n2));
        break;
      case 4:
        if (n2 != 0)
          printf("%.2f / %.2f = %.2f \n", n1, n2, (n1 / n2));
        else
          printf("Nao e possivel fazer divisao por zero \n");
        break;
      default:
        break;
    }
  } else {
    printf("Resposta invalida \n");
  }
  return 0;
}