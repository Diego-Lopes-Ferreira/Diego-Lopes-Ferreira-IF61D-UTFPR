#include <stdio.h>
/* calcula os n primeiros números positivos primos a partir de
  um valor dado pelo usuário, até que sua soma seja maior ou igual
  'a um valor dado pelo usuário */
main(){

  int n, x, s, Q, soma;

  printf("\ndigite o valor inicial: ");
  scanf("%d",&n);
  printf("digite o valor da soma a ser atingida: ");
  scanf("%d", &Q);

  soma = 0;

  while (soma < Q){

    x = n;
    s = 0;
    while (x >= 1){
      if (n % x == 0)
        s = s + 1;
      x = x - 1;
    }
    if (s == 2){
      printf("\no numero %d e primo", n);
      soma = soma + n;
    }
      else
        printf("\no numero %d nao e primo", n);

    n = n + 1;

  }
  printf("\n\na soma e %d", soma);
}
