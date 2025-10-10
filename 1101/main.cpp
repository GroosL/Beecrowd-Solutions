#include <bits/stdc++.h>

int main() {
  int m, n, soma{};
  while (std::cin >> m >> n) {
    if (n <= 0 || m <= 0) {
      break;
    }
    soma = 0;
    if (n > m) {
      n ^= m;
      m ^= n;
      n ^= m;
    }
    for (int i = n; i <= m; i++) {
      std::cout << i << ' ';
      soma += i;
    }
    std::cout << "Sum=" << soma << '\n';
  }
}
