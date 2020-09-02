/*
  Perguntar ao usuário se ele deseja calcular:
  [1] a área de um triângulo
  [2] a área de um círculo
  [3] a área de um cubo
  [4] a área de um cilindro
  Solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela

  entradas:
    selecao
    se 1:
      base e altura
    se 2:
      raio
    se 3:
      lado
    se 4:
      raio e altura
  saidas:
    area escolhida
  processamento:
    pergunta ao usuario
    switch(resposta)
    case 1:
      chama triangle()
    case 2:
      chama circle()
    case 3:
      chama cube()
    case 4:
      chama cillinder()
*/
#include <stdio.h>

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

int main () {
  int selecao;
  float PI = 3.14;
  printf("Selecione uma opcao: \n  [1] a area de um triangulo\n  [2] a area de um circulo\n");
  printf("  [3] a area de um cubo\n  [4] a area de um cilindro\n>>>");
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
  default:
    printf("Selecione uma opcao correta da proxima vez \n");
  }
  return 0;
}