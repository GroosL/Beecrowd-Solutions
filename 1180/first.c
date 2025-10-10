#include <stdio.h>

int main()
{
  int N, prev, i, pos;

  scanf("%d", &N);

  int X[N];

  for (i = 0; i < N; i++) {
    scanf("%d", &X[i]);
  }

  prev = X[0];
  pos = 0;

  for (i = 1; i < N; i++) {
    if (X[i] < prev) {
      prev = X[i];
      pos = i;
    }
  }

  printf("Menor valor: %d\nPosicao: %d\n", prev, pos);

  return 0;
}
