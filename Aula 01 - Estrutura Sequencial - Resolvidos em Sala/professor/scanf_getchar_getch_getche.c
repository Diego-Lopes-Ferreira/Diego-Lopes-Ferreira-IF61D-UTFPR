#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	char c;
	
	printf("\nscanf - Digite um caracter: ");
	fflush(stdin);
	scanf("%c",&c);
	printf("\n --> %c",c);
	
	printf("\ngetchar - Digite um caracter: ");
	fflush(stdin);
	c = getchar();
	printf("\n --> %c",c);
	
	printf("\ngetche - Digite um caracter: ");
	fflush(stdin);
	c = getche();
	printf("\n --> %c",c);
	
	printf("\ngetch - Digite um caracter: ");
	fflush(stdin);
	c = getch();
	printf("\n --> %c",c);
	
	return 0;	
}