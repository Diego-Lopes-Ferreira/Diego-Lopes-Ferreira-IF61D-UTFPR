#include <stdio.h>
main(){
//ENQUANTO - while
//repete um grupo de comandos enquanto uma condição for
//verdadeira - EXECUTA O TESTE NO INÍCIO
  int n, c;
  printf("Digite um valor para a tabuada: ");
  scanf("%d", &n);
//------WHILE------------------------------------
  c = 1;
  while (c <= 10){
    printf("\n%2d x %2d = %2d",c, n, c * n);
    c = c + 1;
  }
//------WHILE------------------------------------
//FAÇA - do
//repete um grupo de comandos enquanto uma condição for
//verdadeira - EXECUTA O TESTE NO FINAL
//------DO------------------------------------
  c = 1;
  do{
    printf("\n%2d x %2d = %2d",c, n, c * n);
    c = c + 1;
  } while (c <= 10);
//------DO------------------------------------
//PARA - for
//repete um grupo de comandos enquanto um condição for
//verdadeira - EXECUTA O TESTE NO INÍCIO
//------FOR------------------------------------
  for(c = 1;c <= 10;c=c+1)
    printf("\n%2d x %2d = %2d",c, n, c * n);
//------FOR------------------------------------
}
