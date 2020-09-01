#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char op[4];
	int opc;
	
	do{
		system("cls");
    printf("\nMENU");
    printf("\n1 - kljashdlkaJD");
    printf("\n2 - kSADASDASDASDASDD");
    printf("\n3 - MNCVNMCVMNCVMNCV");
    printf("\n4 - 8734873478348734\n");
    scanf("%d",&opc);
	  switch(opc){
			case 1:
				printf("\n1\n");
				break;
			case 2:
				printf("\n2\n");
				break;
			case 3:
				printf("\n3\n");
				break;
			case 4:
				printf("\n4\n");
				break;
			default:
				printf("\nopcao incorreta\n");
		}
	  do{
	    printf("\nDeseja continuar? SIM ou NAO ");
	    fflush(stdin);
	    gets(op);
	  }while((strcmp(strupr(op),"SIM") != 0) && (strcmp(strupr(op),"NAO") != 0));
	}while((strcmp(strupr(op),"SIM")==0));
	
	return 0;
}