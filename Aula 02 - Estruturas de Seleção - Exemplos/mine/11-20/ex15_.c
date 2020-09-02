/*

  Em uma empresa, os funcionários que forem solteiros não receberão bônus natalinos.
  Os funcionários que não forem solteiros e tiverem filhos receberão um bônus de 20% de seu salário-base
  (ou seja, receberão o valor de seu salário acrescido de 20%).
  Os funcionários que não forem solteiros e não tiverem filhos receberão um bônus de 15% de seu salário-base
  (ou seja, receberão o valor de seu salário mais 15%)


  entradas:
    salario do funcionario
  saidas:
    salario final
  processamento:
    ler o salario
    se e solteiro:
      final = salario
    senao, se tem filhos:
      final = salario * 1.20
    senao:
      final = salario * 1.15
*/
#include <stdio.h>
#include <string.h>
int pergunte(char pergunta[256]) {
  char user[4];
  printf("%s \n[nao / sim]>>>", pergunta);
  fflush(stdin);
  gets(user);
  //printf("%s \n", user);
  return (strcmp(strlwr(user), "sim") == 0);
}

int main () {

  float salarioBase, salarioFinal;

  printf("Qual o salario base? \n>>> R$ ");
  scanf("%f",  &salarioBase);

  if (pergunte("\nO funcionario e solteiro?"))
    salarioFinal = salarioBase;
  else if (pergunte("\nO funcionario tem filhos?"))
    salarioFinal = salarioBase * 1.20;
  else
    salarioFinal = salarioBase * 1.15;
  
  printf("Salario Final R$ %.2f \n", salarioFinal);
  return 0;
}