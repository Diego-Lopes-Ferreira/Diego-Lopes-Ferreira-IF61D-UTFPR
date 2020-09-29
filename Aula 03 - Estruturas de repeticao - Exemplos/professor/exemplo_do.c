#include <stdio.h>
main(){
  int n, x;
  for(n = 1;n <= 6;n++){
    printf("\nn --> %d", n);
    for(x = 1;x <= 6;x++)
      printf("\n\tx --> %d",x);
  }
}
