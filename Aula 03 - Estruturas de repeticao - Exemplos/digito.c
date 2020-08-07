#include <stdio.h>
main(){
  int conta, aux, t, contai;

  printf("Digite o numero da conta: ");
  scanf("%d",&conta);

  for(aux = conta, t = 1;aux >= 1;){
    aux = aux / 10;
    t = t * 10;
  }
  t = t / 10;

  printf("\nconta %d tamanho %d\n",conta,t);

  for(aux = conta, contai = 0;t >= 1;){
    contai = contai + aux % 10 * t;
    aux = aux / 10;
    t = t / 10;
  }

  printf("\nconta %d contai %d\n",conta,contai);

}
