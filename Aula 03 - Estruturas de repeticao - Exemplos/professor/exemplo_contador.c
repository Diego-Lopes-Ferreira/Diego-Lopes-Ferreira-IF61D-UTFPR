#include <stdio.h>
/* calcula os 10 primeiros números positivos
   primos a partir de um valor dado pelo usuário */
main(){

  int n, x, s, Q;

  Q = 0;

  printf("\ndigite o valor inicial: ");
  scanf("%d",&n);

  while (Q < 10){

    x = n;
    s = 0;
    while (x >= 1){
      if (n % x == 0)
        s = s + 1;
      x = x - 1;
    }
    if (s == 2){
      printf("\no numero %d e primo", n);
      Q = Q + 1;
    }
      else
        printf("\no numero %d nao e primo", n);

    n = n + 1;

  }
}
