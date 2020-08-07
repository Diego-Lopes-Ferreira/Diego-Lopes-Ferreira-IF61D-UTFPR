#include <stdio.h>
int main(){
  char op;
  printf("Informe um valor:\n");
  printf("A ... Z ou\na ... z ou\n0 ... 9\n");
  scanf("%c", &op);
 //*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=
  if ((op >= 65) && (op <= 90))
    printf("voce escolheu uma letra maiuscula\n");
    else
	  if ((op >= 97) && (op <= 122))
        printf("voce escolheu uma letra minuscula\n");
          else
            if ((op >= 48) && (op <= 57))
              printf("voce escolheu um numero entre 0 e 9\n");
                else
                  printf("voce escolheu outro simbolo\n");
 //*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=
  if ((op >= 65) && (op <= 90))
    printf("voce escolheu uma letra maiuscula\n");
  if ((op >= 97) && (op <= 122))
    printf("voce escolheu uma letra minuscula\n");
  if ((op >= 48) && (op <= 57))
    printf("voce escolheu um numero entre 0 e 9\n");
  if (!((((op >= 65) && (op <= 90))) || (((op >= 97) && (op <= 122))) || (((op >= 48) && (op <= 57)))))
    printf("voce escolheu outro simbolo\n");
 //*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=
   switch (op){
    case 'A'...'Z':
      printf("voce escolheu uma letra maiuscula\n");
      break;
    case 'a'...'z':
      printf("voce escolheu uma letra miniscula\n");
      break;
    case '0'...'9':
      printf("voce escolheu um numero entre 0 e 9\n");
      break;
    default:
      printf("voce escolheu outro simbolo\n");
  }
 //*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=
  return 0;
}
