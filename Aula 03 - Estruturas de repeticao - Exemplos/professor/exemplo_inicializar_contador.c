#include <stdio.h>
int main(){
  int cont;

  printf("\ncont = 0 e while (cont < 15)\n");
  cont = 0;
  while (cont < 15){
    printf("%d ",cont);
    cont = cont + 1;
  }

  printf("\n\ncont = 1 e while (cont <= 15)\n");
  cont = 1;
  while (cont <= 15){
    printf("%d ",cont);
    cont = cont + 1;
  }

 return 0;
}
