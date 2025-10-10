#include <bits/stdc++.h>

int main() {
  int count{};
  double soma{};
  for (int i = 0; i < 6; i++) {
    double x;
    std::cin >> x;
    if (x > 0) {
      count++;
      soma+=x;
    }
  }
  std::cout << count << " valores positivos\n";
  std::cout << std::fixed << std::setprecision(1) << soma / count << '\n';
}
