#include <stdio.h>
#include <locale.h>
 int main(){
   setlocale(LC_ALL,"Portuguese");
   int n, x, tempo, fim;
   float massa, copia;
   printf("Digite um n�mero inteiro para mostrar a tabuada: ");
   scanf("%d",&n);
/*
   printf("\n%d X %d = %d",1,n,1*n);
   printf("\n%d X %d = %d",2,n,2*n);
   printf("\n%d X %d = %d",3,n,3*n);
   printf("\n%d X %d = %d",4,n,4*n);
   printf("\n%d X %d = %d",5,n,5*n);
   printf("\n%d X %d = %d",6,n,6*n);
   printf("\n%d X %d = %d",7,n,7*n);
   printf("\n%d X %d = %d",8,n,8*n);
   printf("\n%d X %d = %d",9,n,9*n);
   printf("\n%d X %d = %d",10,n,10*n);

  1 - o valor de n n�o muda, � sempre o que lido
  2 - o valor que multiplica n come�a em 1 e termina em 10
      esta � a nossa vari�vel de controle do la�o de repeti��o
  3 - deve-se sempre saber quando a repeti��o come�a,
      quando ela termina, e como ela 'caminha' do come�o
      ao t�rmino
  4 - a vari�vel de controle come�a em 1 e termina em 10,
      caminhando de 1 em 1
*/

//********************CONTADOR********************

//PRIMEIRO FORMATO DE REPETI��O:
//------------------------------
//repeti��o com avalia��o da condi��o no in�cio da estrutura
//esta estrutura � executada zero ou n vezes
//sintaxe:
//          while <condi��o>
//             {
//                <comandos>
//             }
//
//enquanto a condi��o for verdadeira, os comandos s�o executados

//utilizando um CONTADOR como vari�vel de controle do la�o

   x = 1;          //inicializar a vari�vel de controle da estrutura
   while (x <= 10) //determino a condi��o de parada
   {
      printf("\n%d X %d = %d",x,n,n*x);
      x = x + 1;   //incremento a vari�vel de controle
   }

//SEGUNDO FORMATO DE REPETI��O:
//------------------------------
//repeti��o com avalia��o da condi��o no final da estrutura
//esta estrutura � executada 1 ou n vezes
//sintaxe:
//          do
//            {
//               <comandos>
//            }while <condi��o>;
//
//enquanto a condi��o for verdadeira, os comandos s�o executados

//utilizando um CONTADOR como vari�vel de controle do la�o

   x = 1;            //inicializar a vari�vel de controle da estrutura
   do
     {
        printf("\n%d X %d = %d",x,n,n*x);
        x = x + 1;   //incremento a vari�vel de controle
     }while (x <= 10);//determino a condi��o de parada

//TERCEIRO FORMATO DE REPETI��O (la�o contado):
//--------------------------------------------
//repeti��o com avalia��o da condi��o no in�cio da estrutura
//esta estrutura � executada zero ou n vezes
//sintaxe:
//          for([in�cio];[condi��o];[incremento/decremento])
//             {
//                [comandos]
//             }
//
//    [in�cio] � a inicializa��o da vari�vel de controle
//    [condi��o] � a condi��o de parada da estrutura
//    [inc/dec] � altera��o de valor da vari�vel de controle
//
//enquanto a condi��o for verdadeira, os comandos s�o executados

//utilizando um CONTADOR como vari�vel de controle do la�o

   for(x = 1;x <= 10;x = x + 1)
   {
      printf("\n%d X %d = %d",x,n,n*x);
   }

//********************ACUMULADOR********************
//
//um determinado material radioativo perde 50% de sua massa
//a cada 30 segundos
//dado o valor da massa em gramas, determinar quantos segundos
//este material leva para que a mesma seja menor do que 0.05 gramas

//PRIMEIRO FORMATO DE REPETI��O:
//------------------------------

//utilizando um ACUMULADOR como vari�vel de controle do la�o

   tempo = 0;
   printf("\nInforme a massa do material: ");
   scanf("%f",&massa);
   copia = massa;
   while (copia >= 0.05) //determino a condi��o de parada
   {
      copia = copia / 2; //altero o valor da vari�vel de controle
      tempo = tempo + 30;
   }
   printf("\nO tempo � de %d segundos",tempo);

//SEGUNDO FORMATO DE REPETI��O:

//utilizando um ACUMULADOR como vari�vel de controle do la�o

   tempo = 0;
   printf("\nInforme a massa do material: ");
   scanf("%f",&massa);
   copia = massa;
   do
   {
      copia = copia / 2; //altero o valor da vari�vel de controle
      tempo = tempo + 30;
   }while (copia >= 0.05); //determino a condi��o de parada
   printf("\nO tempo � de %d segundos",tempo);

//TERCEIRO FORMATO DE REPETI��O (la�o contado):

//utilizando um ACUMULADOR como vari�vel de controle do la�o

   printf("\nInforme a massa do material: ");
   scanf("%f",&massa);
   for(copia = massa,tempo = 0;copia >= 0.05;)
   {
      copia = copia / 2; //altero o valor da vari�vel de controle
      tempo = tempo + 30;
   }
   printf("\nO tempo � de %d segundos",tempo);

//********************FLAG********************

//PRIMEIRO FORMATO DE REPETI��O:
//------------------------------

//utilizando um FLAG como vari�vel de controle do la�o

   printf("\nDigite um n�mero para a tabuada: ");
   scanf("%d",&n);
   x = 1;
   fim = 0; //inicializar a vari�vel de controle da estrutura
   while (fim == 0)
     {
        printf("\n%d X %d = %d",x,n,n*x);
        x = x + 1;
        printf("\n\tDeseja continuar? 0 para sim ou 1 para n�o: ");
        scanf("%d",&fim);
     }

//SEGUNDO FORMATO DE REPETI��O:
//------------------------------

//utilizando um FLAG como vari�vel de controle do la�o

   printf("\nDigite um n�mero para a tabuada: ");
   scanf("%d",&n);
   x = 1;
   fim = 0; //inicializar a vari�vel de controle da estrutura
   do
     {
        printf("\n%d X %d = %d",x,n,n*x);
        x = x + 1;
        printf("\n\tDeseja continuar? 0 para sim ou 1 para n�o: ");
        scanf("%d",&fim);
     }while (fim == 0);

//TERCEIRO FORMATO DE REPETI��O:
//------------------------------

//utilizando um FLAG como vari�vel de controle do la�o

   printf("\nDigite um n�mero para a tabuada: ");
   scanf("%d",&n);
   x = 1;
   fim = 0; //inicializar a vari�vel de controle da estrutura
   for(x = 1, fim = 0;fim == 0;)
     {
        printf("\n%d X %d = %d",x,n,n*x);
        x = x + 1;
        printf("\n\tDeseja continuar? 0 para sim ou 1 para n�o: ");
        scanf("%d",&fim);
     }

   return 0;
}
