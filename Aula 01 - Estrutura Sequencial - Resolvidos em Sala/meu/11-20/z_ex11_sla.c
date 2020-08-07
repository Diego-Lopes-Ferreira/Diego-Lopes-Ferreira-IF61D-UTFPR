/*
Escreva um programa em linguagem C que contenha a declaração de uma variável do tipo int
chamada a, uma variável chamada b do tipo float e uma variável do tipo char chamada c. Usando o
operador de atribuição, escreva uma instrução para atribuir um valor qualquer para cada uma delas. 


  entradas:
  none;

  saidas:
  a - int
  b - float
  c - char
  processamento:
  a vale rand
  b vale rand de float
  c vale sla
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int modify_string(char old, char new) {
  /* Modifies the value of a string */
  int new_len = (strlen(new) + 1);
  printf("new_len = %d \n", new_len);
  return 0;
}

int main() {
  modify_string("olde", "new");
  /* 
  int a;
  float b;
  char c[] = "a";

  b = 1.0;
  //c = "p";

  int i;
  for (i = 0; i < 10; i++) {
    a = rand();
    printf("a - %d \n", a);
    printf("b - %f \n", b);
    printf("c - %s \n", c);
  }
  */
  return 0;
}