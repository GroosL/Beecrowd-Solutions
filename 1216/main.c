#include <stdio.h>

int main(void) {
  char s[1000];
  double soma = 0;
  int count = 0;

  while (fgets(s, sizeof(s), stdin)) {
    int x;
    if (scanf("%d", &x) != 1)
      break;
    soma += x;
    count++;
    getchar();
  }

  if (count > 0) {
    printf("%.1f\n", soma / count);
  }
}
