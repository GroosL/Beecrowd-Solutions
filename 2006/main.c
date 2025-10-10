#include <stdio.h>

int main()
{
  int T, i, count;
  int resp[6];

  scanf("%d", &T);

  for (i = 0; i < 5; i++) {
    scanf("%d", &resp[i]);
  }

  for (int i = 0; i < 5; i++) {
    if (resp[i] == T) {
      count++;
    }
  }
  
  printf("%d\n", count);

  return 0;
}
