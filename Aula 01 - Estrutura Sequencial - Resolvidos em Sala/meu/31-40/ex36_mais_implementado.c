#include<stdio.h> // include stdio.h library
#include<stdlib.h> // include stdlib.h library
int valid_date(int date, int mon, int year);

int main () {
  int dia1, dia2, mes1, mes2, ano1, ano2;
  int dia_dif, mes_dif, ano_dif;  
  printf("Data de inicio (mais antiga) \n(DD/MM/AAAA)>>> ");
  scanf("%d/%d/%d", &dia1, &mes1, &ano1);
  if(!valid_date(dia1, mes1, ano1)) {
    printf("Data invalida\n");
    exit(0);
  }
  
  printf("Data final (mais nova) \n(DD/MM/AAAA)>>> ");
  scanf("%d/%d/%d", &dia2, &mes2, &ano2);
  if(!valid_date(dia2, mes2, ano2)) {
    printf("Data invalida\n");
    exit(0);
  }

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

int valid_date(int dia, int mes, int ano) {
  int is_valid = 1, is_leap = 0;
  if (ano >= 1800 && ano <= 9999) {
    // checa se e ano bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
      is_leap = 1;
    }
    if(mes >= 1 && mes <= 12) {
      if (mes == 2) {
        // Fevereiro
        if (is_leap && dia == 29) {
          is_valid = 1;
        } else if(dia > 28) {
          is_valid = 0;
        }
      } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {  
        // Meses com 30 dias
        if (dia > 30) {
          is_valid = 0;
        }
      } else if(dia > 31) {            
        // Meses com 31 dias
        is_valid = 0;
      }        
    } else {
      is_valid = 0;
    }
  } else {
    is_valid = 0;
  }
  return is_valid;
}