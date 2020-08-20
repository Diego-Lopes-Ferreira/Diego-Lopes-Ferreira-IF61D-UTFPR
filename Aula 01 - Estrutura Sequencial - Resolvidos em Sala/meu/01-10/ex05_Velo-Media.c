 #include <stdio.h>

int main () {
  float x, y, speed;
  printf("Digite a quantidade de quilometros rodados: ");
  scanf("%f", &x);
  printf("Digite o tempo [minutos]: ");
  scanf("%f", &y);

  speed = x / (y/60);

  printf("Velocidade media: %.2f km/h", speed);
}
