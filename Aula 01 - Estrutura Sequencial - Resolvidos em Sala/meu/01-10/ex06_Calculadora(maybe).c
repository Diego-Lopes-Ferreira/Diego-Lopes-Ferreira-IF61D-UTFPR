/*
Obter dois números quaisquer, e informar:
a) a soma destes números;
b) a subtração destes números;
c) a multiplicação destes números;
*/

int main () {
  float n1, n2, sum, sub, times;
  printf("Digite o primeiro numero: ");
  scanf("%f", &n1);

  printf("Digite o segundo numero: ");
  scanf("%f", &n2);

  sum = n1 + n2;
  sub = n1 - n2;
  times = n1 * n2;

  printf("Soma de %f com %f = %f \n", n1, n2, sum);
  printf("Subtracao de %f e %f = %f \n", n1, n2, sub);
  printf("Multiplicacao de %f por %f = %f \n", n1, n2, times);
  return 0;
}
