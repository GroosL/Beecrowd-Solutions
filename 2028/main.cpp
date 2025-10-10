#include <bits/stdc++.h>

int main() {
  int n, caso{};
  while (std::cin >> n) {
    int total{1};
    for (int i = 1; i<=n; i++) {
      total+=i;
    }

    std::cout << "Caso " << ++caso << ": " << total;
    if (total == 1) {
      std::cout << " numero\n";
    }
    else {
      std::cout << " numeros\n";
    }

    std::cout << 0;
    for (int i = 1; i <= n; i++) {
      for (int j = 0; j < i; j++) {
        std::cout << ' ' << i; 
      }
    }
    std::cout << "\n\n";
  }
}
