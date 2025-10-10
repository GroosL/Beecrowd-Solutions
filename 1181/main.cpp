#include <bits/stdc++.h>

int main() {
  int m[12][12];
  char op;
  int l;
  std::cin >> l >> op;
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      std::cin >> m[i][j];
    }
  }
  double soma{};
  for (int i = 0; i < 12; i++) {
    soma+=m[l][i];
  }
  if (op == 'S') {
    std::cout << std::fixed << std::setprecision(1) << soma << '\n'; 
  }
  else {
    std::cout << std::fixed << std::setprecision(1) << soma / 12.0 << '\n';
  }
}
