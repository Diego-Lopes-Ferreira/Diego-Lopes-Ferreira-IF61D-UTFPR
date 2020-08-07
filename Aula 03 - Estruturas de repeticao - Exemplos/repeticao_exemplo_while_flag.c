#include <stdio.h>
#include <stdlib.h>
main(){
//ENQUANTO - while
//repete um grupo de comandos enquanto uma condição for
//verdadeira - EXECUTA O TESTE NO INÍCIO
  int n, c, op;
  op = 1;
  while (op == 1){
    system("cls");
    printf("Digite um valor para a tabuada: ");
    scanf("%d", &n);
    c = 1;
    while (c <= 10){
      printf("\n%2d x %2d = %2d",c, n, c * n);
      c = c + 1;
    }
    printf("\nDeseja calcular outra tabuada? 1(sim) ou 2 (nao): ");
    scanf("%d", &op);
  }
}
