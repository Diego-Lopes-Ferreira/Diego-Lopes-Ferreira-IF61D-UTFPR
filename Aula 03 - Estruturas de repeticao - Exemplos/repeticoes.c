#include <stdio.h>
#include <locale.h>
 int main(){
   setlocale(LC_ALL,"Portuguese");
   int n, x, tempo, fim;
   float massa, copia;
   printf("Digite um número inteiro para mostrar a tabuada: ");
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

  1 - o valor de n não muda, é sempre o que lido
  2 - o valor que multiplica n começa em 1 e termina em 10
      esta é a nossa variável de controle do laço de repetição
  3 - deve-se sempre saber quando a repetição começa,
      quando ela termina, e como ela 'caminha' do começo
      ao término
  4 - a variável de controle começa em 1 e termina em 10,
      caminhando de 1 em 1
*/

//********************CONTADOR********************

//PRIMEIRO FORMATO DE REPETIÇÃO:
//------------------------------
//repetição com avaliação da condição no início da estrutura
//esta estrutura é executada zero ou n vezes
//sintaxe:
//          while <condição>
//             {
//                <comandos>
//             }
//
//enquanto a condição for verdadeira, os comandos são executados

//utilizando um CONTADOR como variável de controle do laço

   x = 1;          //inicializar a variável de controle da estrutura
   while (x <= 10) //determino a condição de parada
   {
      printf("\n%d X %d = %d",x,n,n*x);
      x = x + 1;   //incremento a variável de controle
   }

//SEGUNDO FORMATO DE REPETIÇÃO:
//------------------------------
//repetição com avaliação da condição no final da estrutura
//esta estrutura é executada 1 ou n vezes
//sintaxe:
//          do
//            {
//               <comandos>
//            }while <condição>;
//
//enquanto a condição for verdadeira, os comandos são executados

//utilizando um CONTADOR como variável de controle do laço

   x = 1;            //inicializar a variável de controle da estrutura
   do
     {
        printf("\n%d X %d = %d",x,n,n*x);
        x = x + 1;   //incremento a variável de controle
     }while (x <= 10);//determino a condição de parada

//TERCEIRO FORMATO DE REPETIÇÃO (laço contado):
//--------------------------------------------
//repetição com avaliação da condição no início da estrutura
//esta estrutura é executada zero ou n vezes
//sintaxe:
//          for([início];[condição];[incremento/decremento])
//             {
//                [comandos]
//             }
//
//    [início] é a inicialização da variável de controle
//    [condição] é a condição de parada da estrutura
//    [inc/dec] é alteração de valor da variável de controle
//
//enquanto a condição for verdadeira, os comandos são executados

//utilizando um CONTADOR como variável de controle do laço

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

//PRIMEIRO FORMATO DE REPETIÇÃO:
//------------------------------

//utilizando um ACUMULADOR como variável de controle do laço

   tempo = 0;
   printf("\nInforme a massa do material: ");
   scanf("%f",&massa);
   copia = massa;
   while (copia >= 0.05) //determino a condição de parada
   {
      copia = copia / 2; //altero o valor da variável de controle
      tempo = tempo + 30;
   }
   printf("\nO tempo é de %d segundos",tempo);

//SEGUNDO FORMATO DE REPETIÇÃO:

//utilizando um ACUMULADOR como variável de controle do laço

   tempo = 0;
   printf("\nInforme a massa do material: ");
   scanf("%f",&massa);
   copia = massa;
   do
   {
      copia = copia / 2; //altero o valor da variável de controle
      tempo = tempo + 30;
   }while (copia >= 0.05); //determino a condição de parada
   printf("\nO tempo é de %d segundos",tempo);

//TERCEIRO FORMATO DE REPETIÇÃO (laço contado):

//utilizando um ACUMULADOR como variável de controle do laço

   printf("\nInforme a massa do material: ");
   scanf("%f",&massa);
   for(copia = massa,tempo = 0;copia >= 0.05;)
   {
      copia = copia / 2; //altero o valor da variável de controle
      tempo = tempo + 30;
   }
   printf("\nO tempo é de %d segundos",tempo);

//********************FLAG********************

//PRIMEIRO FORMATO DE REPETIÇÃO:
//------------------------------

//utilizando um FLAG como variável de controle do laço

   printf("\nDigite um número para a tabuada: ");
   scanf("%d",&n);
   x = 1;
   fim = 0; //inicializar a variável de controle da estrutura
   while (fim == 0)
     {
        printf("\n%d X %d = %d",x,n,n*x);
        x = x + 1;
        printf("\n\tDeseja continuar? 0 para sim ou 1 para não: ");
        scanf("%d",&fim);
     }

//SEGUNDO FORMATO DE REPETIÇÃO:
//------------------------------

//utilizando um FLAG como variável de controle do laço

   printf("\nDigite um número para a tabuada: ");
   scanf("%d",&n);
   x = 1;
   fim = 0; //inicializar a variável de controle da estrutura
   do
     {
        printf("\n%d X %d = %d",x,n,n*x);
        x = x + 1;
        printf("\n\tDeseja continuar? 0 para sim ou 1 para não: ");
        scanf("%d",&fim);
     }while (fim == 0);

//TERCEIRO FORMATO DE REPETIÇÃO:
//------------------------------

//utilizando um FLAG como variável de controle do laço

   printf("\nDigite um número para a tabuada: ");
   scanf("%d",&n);
   x = 1;
   fim = 0; //inicializar a variável de controle da estrutura
   for(x = 1, fim = 0;fim == 0;)
     {
        printf("\n%d X %d = %d",x,n,n*x);
        x = x + 1;
        printf("\n\tDeseja continuar? 0 para sim ou 1 para não: ");
        scanf("%d",&fim);
     }

   return 0;
}
