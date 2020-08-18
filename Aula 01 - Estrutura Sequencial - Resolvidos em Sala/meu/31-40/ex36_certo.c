/*
Calcular a diferença em dias, meses e anos entre duas datas fornecidas no formato DD MM AAAA
(DD = dia; MM =mês; AAAA = ano com quatro dígitos)

  entradas:
    Dias, meses e anos
  saidas:
    diasPassados mesesPassados e anosPassados
  processamento:
    ler as entradas
    diasPassados += dias
    diasPassados += meses * 31
    diasPassados += 

*/

#include<stdio.h>

int main () {
  int dia1, dia2, mes1, mes2, ano1, ano2;
  int diferenca;
  int dia_dif, mes_dif, ano_dif;  
  printf("Data 1 (mais antiga) \n(DD/MM/AAAA)>>> ");
  scanf("%d/%d/%d", &dia1, &mes1, &ano1);
  printf("Data 2 (mais nova) \n(DD/MM/AAAA)>>> ");
  scanf("%d/%d/%d", &dia2, &mes2, &ano2);

  if (dia2 < dia1) {
    // para nao dar negativo, tem que transformar um mes do 2 em dias
    if (mes2 == 2) {
      if ((ano2 % 4 == 0 && ano2 % 100 != 0) || (ano2 % 400 == 0)) {
        //ano bisexto
        dia2 += 29;
      } else {
        dia2 += 28;
      }
    } else if (mes2 == 4 || mes2 == 6 || mes2 == 9 || mes2 == 11) {
      dia1 += 30;
    } else {
      //se nao for janeiro
      dia1 += 31;
    }
    mes2 -= 1;
  }

  if (mes2 < mes1) {
    // para nao dar negativo, tem que transformar um ano do 2 em meses
    mes2 += 12;
    ano2 -= 1;
  }
  //como todos as subtracoes serao positivas agora, e so subtrair
  dia_dif = dia2 - dia1;
  mes_dif = mes2 - mes1;
  ano_dif = ano2 - ano1;

  //converte o mes1 para dias
  printf("A diferenca e de %d dias %d meses e %d anos\n", dia_dif, mes_dif, ano_dif);

  return 0;
}