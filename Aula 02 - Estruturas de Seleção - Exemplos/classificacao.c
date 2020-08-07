#include <stdio.h>
#include <string.h>
int main(){
  char op[3];
  printf("\nPara cada pergunta responda sempre SIM ou NAO");
  printf("\nO animal e mamifero? ");
  fflush(stdin);
  gets(op);  
  if (strcmp(strupr(op),"SIM") == 0){
    printf("\nE quadrupede? ");
    gets(op);
    if (strcmp(strupr(op),"SIM") == 0){
      printf("\nE carnivoro? ");
      gets(op);
      if (strcmp(strupr(op),"SIM") == 0)
        printf("\nLEAO");
        else
          printf("\nCAVALO");
    }
    else{
      printf("\nE bipede? ");
      gets(op);
      if (strcmp(strupr(op),"SIM") == 0){
        printf("\nE onivoro? ");
        gets(op);
        if (strcmp(strupr(op),"SIM") == 0)
          printf("\nHOMEM");
          else
            printf("\nMACACO");
      }
      else{
        printf("\nE voador? ");
        gets(op);
        if (strcmp(strupr(op),"SIM") == 0)
          printf("\nMORCEGO");
          else
            printf("\nBALEIA");
      }
    }
  }
  else{
    printf("\nE ave? ");
    gets(op);
    if (strcmp(strupr(op),"SIM") == 0){
      printf("\nE nao-voadora? ");
      gets(op);
      if (strcmp(strupr(op),"SIM") == 0){
        printf("E tropical? ");
        gets(op);
        if (strcmp(strupr(op),"SIM") == 0)
          printf("\nAVESTRUZ");
          else
            printf("\nPINGUIM");
      }
      else{
        printf("\nE nadadora? ");
        gets(op);
        if (strcmp(strupr(op),"SIM") == 0)
          printf("\nPATO");
          else
            printf("\nAGUIA");
      }
    }
    else{
      printf("\nPossui casco? ");
      gets(op);
      if (strcmp(strupr(op),"SIM") == 0)
        printf("\nTARTARUGA");
        else{
          printf("\nE carnivoro? ");
          gets(op);
          if (strcmp(strupr(op),"SIM") == 0)
            printf("\nCROCODILO");
            else
              printf("\nCOBRA");
        }
    }
  }
  return 0;
}
