/*
Uma cl�nica necessita controlar a agenda de seus m�dicos, registrando 
seus pacientes e as consultas, de acordo com as estruturas a seguir:
-----------------------
		paciente
texto codigopaciente
texto nome
texto telefone
inteiro idade
texto sexo
-----------------------
		medico
texto codigomedico
texto nome
texto especialidade
real valorconsulta
-----------------------
		consulta
texto codigopaciente
texto codigomedico
texto dataconsulta
texto diadasemana
-----------------------
Escreva um programa para:
a)Cadastrar pacientes (n�o deve haver c�digos repetidos para pacientes e os 
  mesmos devem ser informados pelo usu�rio);
b)Cadastrar m�dicos (n�o deve haver c�digos repetidos para m�dicos e os 
  mesmos devem ser informados pelo usu�rio);
c)Cadastrar consultas (um m�dico n�o pode realizar mais de duas consultas na 
  mesma data e uma consulta s� pode ser cadastrada se o c�digo do paciente 
  e o c�digo do m�dico existirem);
d)Mostrar um relat�rio com o nome do m�dico, sua especialidade e todos os 
  pacientes que ele atendeu;

Cada um dos itens acima deve ser realizado em uma fun��o.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

struct p{
	char codigopaciente[10];
  char nome[50];
  char telefone[20];
  int idade;
  char sexo;
}typedef paciente;

struct m{
  char codigomedico[10];
  char nome[50];
  char especialidade[50];
  float valorconsulta;
}typedef medico;

struct c{
  char codigopaciente[10];
  char codigomedico[10];
  char dataconsulta[9];
  char diadasemana[20];
}typedef consulta;

int qtdpac = 0;
int qtdmed = 0;
int qtdcon = 0;

int procura_pacientes(paciente[], char[]); 
/*fun��o procura_pacientes(pacientes[],char cod)
vetor do tipo paciente e codigo do paciente para busca
0 --> c�digo de paciente n�o existe
1 --> c�digo de paciente existe
*/
int procura_medicos(medico[], char[]);
/*fun��o procura_medicos(medico[],char cod)
vetor do tipo paciente e codigo do medico para busca
0 --> c�digo de medico n�o existe
1 --> c�digo de medico existe
*/
int procura_data(consulta[], char[], char[]);
/*fun��o procura_data(consulta[],char cod, char data)
vetor do tipo consulta, c�digo do m�dico e data da consulta
0 --> n�o h� data dispon�vel para a consulta
1 --> h� data dispon�vel para consulta 
*/
int cadastra_pacientes(paciente[]);
/*
vetor do tipo paciente
0 --> os dados do paciente foram cadastrados
1 --> os dados do paciente n�o foram cadastrados
*/
int cadastra_medicos(medico[]);
/*
vetor do tipo medico
0 --> os dados do m�dico foram cadastrados
1 --> os dados do m�dico n�o foram cadastrados
*/
int cadastra_consultas(medico[],paciente[],consulta[]);
/*
vetor do tipo medico, vetor do tipo paciente e vetor do tipo consulta
0 --> os dados da consulta foram cadastrados
1 --> o c�digo do medico n�o existe
2 --> n�o h� data dispon�vel para esta consulta
3 --> codigo de paciente nao existe
*/
void relatorio_medicos(medico[]);
/*
vetor do tipo medico
*/
void relatorio_pacientes(paciente[]);
/*
vetor do tipo paciente
*/
void relatorio_consultas(medico[],paciente[],consulta[]);
/*
vetor do tipo medico, vetor do tipo paciente e vetor do tipo consulta
*/
void dia_da_semana(char[], char[]);
/*
data da consulta - string no formato DDMMAAAA e
dia da semana - domingo, segunda-feira, ..., s�bado

Apenas o primeiro par�metro � informado quando a fun��o � chamada. 
O segundo par�metro conter� a resposta calculada pela fun��o.

char dat[9], ds[15];
...	 
  printf("\nInforme a data da consulta: ");
	fflush(stdin);
	gets(dat);
...
  dia_da_semana(dat,ds);
	printf("\nDia da semana -->  %s",ds);
...
*/


int main(){
/*
LC_ALL for all of the below.
LC_COLLATE for string comparison. See strcoll().
LC_CTYPE for character classification and conversion. For example - strtoupper().
LC_MONETARY for monetary formatting for localeconv().
LC_NUMERIC for decimal separator for localeconv().
LC_TIME for date and time formatting with strftime().
LC_MESSAGES for system responses.
*/		
	setlocale(LC_CTYPE,"Portuguese");
	
	paciente pac[10];
	medico med[10];
	consulta con[50];	
	int op;
	
	do{
		printf("\nCadastro de M�dicos, Pacientes e Consultas\n");
		printf("------------------------------------------");
		printf("\n1 - Cadastra M�dico");
		printf("\n2 - Cadastra Paciente");
		printf("\n3 - Cadastra Consulta");
		printf("\n4 - Relat�rio de M�dicos");
		printf("\n5 - Relat�rio de Pacientes");		
		printf("\n6 - Relat�rio de Consultas");		
		printf("\n7 - Encerrar");
		printf("\n--> ");
		scanf("%d",&op);
		switch(op){
			case 1:
				if(cadastra_medicos(med) == 1){
					printf("\nERRO ao cadastrar m�dico. Verifique o c�digo\n");
		      printf("\n");
	        system("pause");	 	
				}
				break;
			case 2:
				if(cadastra_pacientes(pac) == 1){
	 	      printf("\nERRO ao cadastrar paciente. Verifique o c�digo\n");
		      printf("\n");
	        system("pause");	 					
				}
				break;
			case 3:
				switch(cadastra_consultas(med,pac,con)){
				  case 1:
		 	      printf("\nERRO ao cadastrar consulta. Verifique o c�digo do m�dico\n");
	          printf("\n");
	          system("pause");   			  	
				    break;
				  case 2:  	
				  	printf("\nERRO ao cadastrar consulta. Verifique se h� data dispo�vel para o m�dico\n");
            printf("\n");
	          system("pause");
						break;
				  case 3:
			 	    printf("\nERRO ao cadastrar consulta. Verifique o c�digo do paciente\n");
			 	    printf("\n");
	          system("pause");	  	      
	  	      break;
				}
				break;
			case 4:
        relatorio_medicos(med);
				break;				
			case 5:
        relatorio_pacientes(pac);
				break;	
			case 6:
        relatorio_consultas(med,pac,con);
				break;					
		}
		system("cls");		
	}while(op != 7);
	return 0;	
}

//return 0 --> c�digo de paciente n�o existe
//return 1 --> codigo de paciente existe 
int procura_pacientes(paciente p[], char cod[]){
	int i = 0;
	
  while (i < qtdpac){
    if (strcmp(p[i].codigopaciente,cod) == 0)
      return 1;
    i = i + 1;
   }
   return 0;   
}

//return 0 --> c�digo de m�dico n�o existe
//return 1 --> codigo de medico existe 
int procura_medicos(medico m[], char cod[]){
	int i = 0;
	
  while (i < qtdmed){
    if (strcmp(m[i].codigomedico,cod) == 0)
      return 1;   
    i = i + 1;
   }
   return 0;   
}

//return 0 --> n�o h� data dispon�vel para a consulta
//return 1 --> h� data dispon�vel para consulta 
int procura_data(consulta c[], char cod[], char dat[]){
	int i = 0, medico = 0;
	
//conta a quantidade de consultas de um m�dico em uma determina data
	while(i < qtdcon){
	  if((strcmp(c[i].codigomedico,cod) ==0) && (strcmp(c[i].dataconsulta,dat) == 0))
	  	medico = medico + 1;
		i = i + 1;
	}
	if(medico == 2)
		return 0;
	  else
      return 1;	
}

//return 0 --> os dados do paciente foram cadastrados
//return 1 --> os dados do paciente n�o foram cadastrados
int cadastra_pacientes(paciente p[]){
	 char cod[10];
	 
	 printf("\nInforme o codigo do paciente: ");
	 fflush(stdin);
	 gets(cod);                              //quando a fun��o procura_pacientes retorna 0
	 if(procura_pacientes(p,cod) == 0){      //o c�digo do paciente n�o existe, podendo ser
	   strcpy(p[qtdpac].codigopaciente,cod); //cadastrado
	   printf("\nInforme o nome do paciente: ");
	   fflush(stdin);
	   gets(p[qtdpac].nome);
	   printf("\nInforme o telefone do paciente: ");
	   fflush(stdin);
	   gets(p[qtdpac].telefone);
     printf("\nInforme a idade do paciente: ");
     scanf("%d",&p[qtdpac].idade);
	   printf("\nInforme 1 para Feminino ou 2 para Masculino: ");
	   fflush(stdin);
	   p[qtdpac].sexo = getchar();
	   if (p[qtdpac].sexo == '1')
	   	  p[qtdpac].sexo = 'F';
	   	  else
				  p[qtdpac].sexo = 'M';				 
	   qtdpac = qtdpac + 1;
	   return 0;
	 }
	 else{
     return 1;
	 }
 } 

//return 0 --> os dados do m�dico foram cadastrados
//return 1 --> os dados do m�dico n�o foram cadastrados
int cadastra_medicos(medico m[]){
	 char cod[10];
	 
	 printf("\nInforme o codigo do medico: ");
	 fflush(stdin);
	 gets(cod);                            //quando a fun��o procura_medicos retorna 0
	 if(procura_medicos(m,cod) == 0){      //o c�digo do m�dico n�o existe, podendo ser
	   strcpy(m[qtdmed].codigomedico,cod); //cadastrado
	   printf("\nInforme o nome do medico: ");
	   fflush(stdin);
	   gets(m[qtdmed].nome);
	   printf("\nInforme a especialidade do medico: ");
	   fflush(stdin);
	   gets(m[qtdmed].especialidade);
     printf("\nInforme o valor da consulta do medico: ");
     scanf("%f",&m[qtdmed].valorconsulta);
	   qtdmed = qtdmed + 1;
	   return 0;
	 }
	 else{
     return 1;
	 }
} 

//return 0 --> os dados da consulta foram cadastrados
//return 1 --> o c�digo do medico n�o existe
//return 2 --> n�o h� data dispon�vel para esta consulta
//return 3 --> codigo de paciente nao existe
int cadastra_consultas(medico m[], paciente p[], consulta c[]){
	 char codm[10], codp[10], dat[9], ds[15];
	 
	 printf("\nInforme o codigo do medico: ");
	 fflush(stdin);
	 gets(codm);
	 if(procura_medicos(m,codm) == 1){ //m�dico existe, consulta pode ser cadastrada
	   printf("\nInforme a data da consulta: ");
	   fflush(stdin);
	   gets(dat);
	   if(procura_data(c,codm,dat) == 1){ //h� data dispon�vel para o m�dico, consulta pode ser cadastrada
	   	  printf("\nInforme o codigo do paciente: ");
	   	  fflush(stdin);
	   	  gets(codp);
	   	  if(procura_pacientes(p,codp) == 1){ //paciente existe, consulta pode ser cadastrada
	   	  	 strcpy(c[qtdcon].codigopaciente,codp);
	   	  	 strcpy(c[qtdcon].codigomedico,codm);
	   	  	 strcpy(c[qtdcon].dataconsulta,dat);
	   	  	 dia_da_semana(dat,ds);
					 strcpy(c[qtdcon].diadasemana,ds);
	         qtdcon = qtdcon + 1;
	        return 0; //os dados da consulta foram cadastrados
			 }	
			 else{
			 	 return 3; //os dados n�o foram cadastrados, o c�digo do paciente n�o existe
			 }
	   }
	   else{
			 return 2; //os dados n�o foram cadastrados, n�o h� data dispon�vel para o m�dico
		 }
	 }
	 else{  
		 return 1; //os dados n�o foram cadastrados, o c�digo do m�dico n�o existe
	 }
} 
 
void relatorio_medicos(medico med[]){
	int i;
	
	printf("Relat�rio de M�dicos\n");
	printf("--------------------\n");
	for(i = 0;i < qtdmed; i = i + 1){
		printf("\nC�digo ---------> %s",med[i].codigomedico);
		printf("\nNome  ----------> %s",med[i].nome);
		printf("\nEspecialidade --> %s",med[i].especialidade);
		printf("\nValor Consulta -> %2.2f",med[i].valorconsulta);
		printf("\n-----------------------------------------------");
	}
	printf("\n");
	system("pause");
}

void relatorio_pacientes(paciente pac[]){
	int i;
	
	printf("Relat�rio de Pacientes\n");
	printf("----------------------\n");
	for(i = 0;i < qtdpac; i = i + 1){
		printf("\nC�digo ---------> %s",pac[i].codigopaciente);
		printf("\nNome  ----------> %s",pac[i].nome);
	  printf("\nIdade -----> %d",pac[i].idade);
		printf("\nSexo ------> %c",pac[i].sexo);
		printf("\nTelefone --> %s",pac[i].telefone);
		printf("\n-----------------------------------------------");
	}
	printf("\n");
	system("pause");	
}	
	
void relatorio_consultas(medico med[],paciente pac[],consulta con[]){
	int i, j, dia, mes, ano;
	char valor[] = "\0\0\0\0";
	
	printf("Relat�rio de Consultas\n");
	printf("----------------------\n");
	
	for(i = 0;i < qtdcon; i = i + 1){
		for(j = 0;j < qtdmed;j = j + 1)	
			if(strcmp(con[i].codigomedico,med[j].codigomedico) == 0)				
		    printf("\nM�dico ------------> %s",med[j].nome);
		for(j = 0;j < qtdpac;j = j + 1)	
			if(strcmp(con[i].codigopaciente,pac[j].codigopaciente) == 0)				
		    printf("\nPaciente ----------> %s",pac[j].nome);		  

		printf("\nData da consulta --> %s - ",con[i].diadasemana);

    dia = atoi(strncpy(valor, &con[i].dataconsulta[0], 2));
    mes = atoi(strncpy(valor, &con[i].dataconsulta[2], 2));
    ano = atoi(strncpy(valor, &con[i].dataconsulta[4], 4));	  
		  		  
		printf("%d/%d/%d",dia,mes,ano);
		printf("\n-----------------------------------------------");	
 }
	printf("\n");
	system("pause"); 
}
  
//o par�matros dias[] � um ponteiro para char[] 
//que conter� o dia da semana ao final da fun��o 
void dia_da_semana(char dt[], char dias[]){
  int d, m, a, n, g, f, delta, ds;
  float resto;
  char valor[]="\0\0";
  
  d = atoi(strncpy(valor, &dt[0], 2));
  m = atoi(strncpy(valor, &dt[2], 2));
  a = atoi(strncpy(valor, &dt[4], 4));
	
  if (m <= 2){
	  g = a - 1;
	  f = m + 13;
    }
    else{
	    g = a;
		  f = m + 1;	
	  }
	  
  n = (int)(365.25 * g) + (int)(30.6 * f) - 621049 + d;	  
  
  if (n < 36523)
  	delta = 2;
    else
	    if (n < 73048)
	   	  delta = 1;
          else 
         	  delta = 0;
	 
  resto = (n / 7.0) - trunc(n/ 7.0); 
  if (((resto * 7) - trunc(resto * 7)) > 0.5)  
  	 ds = trunc(resto * 7) + 1 + delta + 1;
     else
       ds = trunc(resto * 7) + delta + 1;
  
	switch (ds){
		case 1:
			strcpy(dias,"Domingo");
			break;
		case 2:
			strcpy(dias,"Segunda-feira");
			break;
		case 3:
			strcpy(dias,"Ter�a-feira");
			break;
		case 4:
			strcpy(dias,"Quarta-feira");
			break;
		case 5:
			strcpy(dias,"Quinta-feira");
			break;
		case 6:
			strcpy(dias,"Sexta-feira");
			break;
		case 7:
			strcpy(dias,"S�bado");
			break;
	}  		
} 