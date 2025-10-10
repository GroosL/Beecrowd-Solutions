#include <stdio.h>

int main() {
  int h1, m1, h2, m2;
  scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

  int comeco = h1 * 60 + m1;
  int fim = h2 * 60 + m2;
  if (fim <= comeco) {
    fim += 24 * 60;
  }
  int duracao = fim - comeco;
  int hF = duracao / 60;
  int mF = duracao % 60;

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hF, mF);
}
