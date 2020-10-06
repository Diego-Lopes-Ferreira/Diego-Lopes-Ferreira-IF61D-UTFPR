/*

  Perguntar ao usuário se ele deseja calcular:
    a) a área de um triângulo
    b) a área de um círculo
    c) a área de um cubo
    d) a área de um cilindro
  Solicitar os dados necessários para calcular a área escolhida, e mostrar o
  resultado na tela. O programa deve continuar sendo executado enquanto o
  usuário não desejar finalizá-lo.

  entradas:

  saidas:

  processamento:

*/
#include <stdio.h>
#include <windows.h>

void triangle() {
  float base, altura, area;
  printf("Digite a base \n>>>");
  scanf("%f", &base);
  printf("Digite a altura \n>>>");
  scanf("%f", &altura);
  area = base * altura;
  printf("A area do triangulo vale %.2f \n", area);
}

void circle(float PI) {
  float raio, area;
  printf("Digite o raio do circulo \n>>>");
  scanf("%f", &raio);
  area = PI * raio * raio;
  printf("A area do circulo vale %.2f \n", area);
}
void cube() {
  float side, area;
  printf("Digite o lado do cubo \n>>>");
  scanf("%f", &side);
  area = side * side * 6;
  printf("A area do cubo vale %.2f \n", area);
}
void cilinder(float PI) {
  float raio, altura, area;
  printf("Digite o raio da base do cilindro \n>>>");
  scanf("%f", &raio);
  printf("Digite a altura do cilindro \n>>>");
  scanf("%f", &altura);
  area = (PI * raio) * ((raio) + (2 * altura));
  printf("A area do circulo vale %.2f \n", area);
}

int main() {
  int selecao, saida = 0;
  float PI = 3.14;

  while (saida == 0) {
    printf("\n\nSelecione uma opcao: \n");
    printf("  [1] a area de um triangulo\n");
    printf("  [2] a area de um circulo\n");
    printf("  [3] a area de um cubo\n");
    printf("  [4] a area de um cilindro\n");
    printf("  [5] Sair");
    printf("\n>>> ");
    scanf("%d", &selecao);
    switch (selecao) {
      case 1:
        triangle();
        break;
      case 2:
        circle(PI);
        break;
      case 3:
        cube();
        break;
      case 4:
        cilinder(PI);
        break;
      case 5:
        saida = 1;
        break;
      default:
        printf("Selecione uma opcao correta\n");
    }
    Sleep(1000);
  }

  printf("Bye :) \n");
  return 0;
}