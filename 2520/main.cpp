#include <bits/stdc++.h>

int main() {
  int n, m, i1, j1, i2, j2;
  while (std::cin >> n >> m) {
    int arr[n][m];

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        std::cin >> arr[i][j];
        if (arr[i][j] == 1) {
          i1 = i;
          j1 = j;
        } else if (arr[i][j] == 2) {
          i2 = i;
          j2 = j;
        }
      }
    }
    std::cout << abs((i2 - i1)) + abs((j2 - j1)) << '\n';
  }
}
