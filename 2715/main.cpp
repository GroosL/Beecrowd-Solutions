#include <iostream>

int main() {
  long long n{}, soma{};
  while (std::cin >> n) {
    soma = 0;
    for (int i = 0; i < n; i++) {
      long x{};
      std::cin >> x;
      soma += x;
    }
    std::cout << soma % 2 << std::endl;
  }
}
