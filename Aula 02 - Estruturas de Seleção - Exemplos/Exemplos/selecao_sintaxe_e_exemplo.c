#include <stdio.h>
int main(){
  int a, b;
  char simbol;
  simbol = '+';
  a = 13;
  b = 5;
//estrutura de sele��o simples
//----------------------------
//SINTAXE:
//         if <condi��o>
//           {
//             <comando(s)>
//           }
//o comando IF (SE) verifica a condi��o (que � uma express�o
//l�gica (produz somente resultados TRUE or FALSE)
//se o resultado for TRUE, ENT�O o(s) comando(s) s�o executados
//caso contr�rio, o fluxo de execu��o segue para o pr�ximo
//comando ap�s o IF
//a utiliza��o de chaves {  } somente � necess�ria caso haja
//mais de um comando na estrutura IF
//exemplo:
  if (a < b)
    printf("\n. %d e menor do que %d",a,b);
  if (a > b)
    printf("\n. %d e maior do que %d",a,b);
  if (a == b)
    printf("\n. %d e %d sao iguais",a,b);
//estrutura de sele��o composta
//----------------------------
//SINTAXE:
//         if <condi��o>
//           {
//             <comando(s)>
//           }
//           else
//             {
//               <comando(s)
//             }
//o comando IF (SE) verifica a condi��o (que � uma express�o
//l�gica (produz somente resultados TRUE or FALSE)
//se o resultado for TRUE, ENT�O o(s) comando(s) ligados diretamente
//ao IF (comandos do ENT�O) s�o executados
//SENAO (ELSE) o(s) comando(s) do bloco ligado ao ELSE ser�o
//executados
//a utiliza��o de chaves {  } somente � necess�ria caso haja
//mais de um comando na estrutura IF
//exemplo:
  if (a < b)
    printf("\n.. %d e menor do que %d",a,b);   //comandos do ENT�O
    else
      printf("\n.. %d e maior do que %d",a,b); //comandos do SEN�O
//estrutura de sele��o encadeada ou aninhada
//------------------------------------------
//permite que um comando IF seja inclu�do dentro de outro comando
//IF
//exemplo:
  if (a < b)
    printf("\n... %d e menor do que %d",a,b);     //comandos do ENT�O do 1� if
    else
      if (a > b)                              //comandos do SEN�O do 1� if
        printf("\n... %d e maior do que %d",a,b); //comandos do ENT�O do 2� if
        else
          printf("\n... %d e %d sao iguais",a,b); //comandos do SEN�O do 2� if

//------------------

  if ((simbol == '+') ||
      (simbol == '/') ||
      (simbol == '-') ||
      (simbol == '*'))
    printf("\n.if OK\n");
    else
      printf("\n.if nao OK\n");

  switch(simbol){
    case '*':
    case '/':
    case '-':
    case '+':
      printf("\n..if OK\n");
      break;
    default:
      printf("\n..if nao OK\n");
  }
  return 0;
}
