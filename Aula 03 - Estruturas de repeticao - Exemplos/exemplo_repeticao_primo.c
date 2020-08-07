#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
  setlocale(LC_ALL,"Portuguese");  
  int n1, n2, x, s;
  printf("Digite o primeiro número do intervalo: ");
  scanf("%d",&n1); 
  printf("Digite o segundo número do intervalo: ");
  scanf("%d",&n2); 
  while(n1 <= n2){ 
    x = n1;
    s = 0;
    while(x >= 1){
	  if(n1 % x == 0)
	    s++;
	  x = x - 1;
    }
    if(s == 2)
  	  printf("\n%d é primo",n1);
      //else
        //printf("\n%d não é primo",n1);
    n1++;
  }
  return 0; 
}  