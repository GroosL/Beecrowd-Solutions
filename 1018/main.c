#include <stdio.h>

int main(void) {
  int valor, valoro, cem, cinquenta, vinte, dez, cinco, dois, um;

  cem = 0;
  cinquenta = 0;
  vinte = 0;
  dez = 0;
  cinco = 0;
  dois = 0;
  um = 0;

  scanf("%d", &valor);
  valoro = valor;

  while (valor >= 100) {
    valor = valor - 100;
    cem++;
  }

  while (valor >= 50) {
    valor = valor - 50;
    cinquenta++;
  }

  while (valor >= 20) {
    valor = valor - 20;
    vinte++;
  }

  while (valor >= 10) {
    valor = valor - 10;
    dez++;
  }

  while (valor >= 5) {
    valor = valor - 5;
    cinco++;
  }

  while (valor >= 2) {
    valor = valor - 2;
    dois++;
  }

  while (valor >= 1) {
    valor = valor - 1;
    um++;
  }

  printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", valoro, cem, cinquenta, vinte, dez, cinco, dois, um);

  return 0;
}
