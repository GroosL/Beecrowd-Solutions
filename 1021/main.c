#include <stdio.h>

int main(void) {
  double valord;
  scanf("%lf", &valord);

  int valor = (int)(valord * 100);

  int cem = valor / 10000;
  valor %= 10000;

  int cinquenta = valor / 5000;
  valor %= 5000;

  int vinte = valor / 2000;
  valor %= 2000;

  int dez = valor / 1000;
  valor %= 1000;

  int cinco = valor / 500;
  valor %= 500;

  int dois = valor / 200;
  valor %= 200;

  int um = valor / 100;
  valor %= 100;

  int m50 = valor / 50;
  valor %= 50;

  int m25 = valor / 25;
  valor %= 25;

  int m10 = valor / 10;
  valor %= 10;

  int m5 = valor / 5;
  valor %= 5;

  int m1 = valor;

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", cem);
  printf("%d nota(s) de R$ 50.00\n", cinquenta);
  printf("%d nota(s) de R$ 20.00\n", vinte);
  printf("%d nota(s) de R$ 10.00\n", dez);
  printf("%d nota(s) de R$ 5.00\n", cinco);
  printf("%d nota(s) de R$ 2.00\n", dois);

  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", um);
  printf("%d moeda(s) de R$ 0.50\n", m50);
  printf("%d moeda(s) de R$ 0.25\n", m25);
  printf("%d moeda(s) de R$ 0.10\n", m10);
  printf("%d moeda(s) de R$ 0.05\n", m5);
  printf("%d moeda(s) de R$ 0.01\n", m1);
}
