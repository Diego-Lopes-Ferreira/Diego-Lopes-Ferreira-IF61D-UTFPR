/*
  Escreva um programa que leia dois números. Caso a soma dos dois números apresente um número
  par e seja maior que 100 mostre a metade da soma na tela, se a soma for um número par menor que
  100, mostre a soma multiplicada por 2. Se a soma resultar em um número ímpar apenas apresente a
  soma
  Escreva um programa que leia dois números. 

  entradas:

  saidas:
  
  processamento:
    soma = n1 + n2
    Se soma seja par && soma > 100:
      print(soma / 2)
    senao, se a soma for um número par menor que 100:
      print(soma * 2)
    senao:
      print(soma)
*/
#include <stdio.h>

int ePar(int n) {
  return (n % 2 == 0);
}

int main() {
  int n1, n2, soma;

  printf("Digite 2 numeros separados por uma barra \n");
  scanf("%d/%d", &n1, &n2);

  soma = n1 + n2;
  printf("Soma: %d \n", soma);
  if (ePar(soma)) {
    if (soma > 100) printf("%d \n", (soma / 2));
    else printf("%d \n", (soma * 2));
  } else printf("%d \n", soma);
  return 0;
}