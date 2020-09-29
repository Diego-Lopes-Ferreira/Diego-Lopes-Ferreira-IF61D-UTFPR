#include <stdio.h>
/* calcula os números primos em um intervalo a partir da decisão do usuário */
main(){

  int n, x, s, Q;

  Q = 0;

  while (Q == 0){
    printf("\ndigite um numero: ");
    scanf("%d",&n);
    x = n;
    s = 0;
    while (x >= 1){
      if (n % x == 0)
        s = s + 1;
      x = x - 1;
    }
    if (s == 2)
      printf("o numero %d e primo", n);
      else
        printf("o numero %d nao e primo", n);

    printf("\n\ndeseja verificar outro numero? 1 para não | 0 para sim ");
    scanf("%d",&Q);
  }
}
