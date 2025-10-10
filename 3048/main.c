#include <stdio.h>

int main() {
  int N, i, count, prev;

  scanf("%d", &N);

  int V[N];

  for (i = 0; i < N; i++) {
    scanf("%d", &V[i]);
  }

  prev = V[0];
  count = 1;

  for (i = 1; i < N; i++) {
    if (V[i] != prev) {
      count++;
      prev = V[i];
    }
  }

  printf("%d\n", count);

  return 0;
}
