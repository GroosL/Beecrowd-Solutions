#include <iostream>

int main() {
  int n;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    int a, b;
    std::cin >> a >> b;
    if (b > a) {
      std::cout << "nao encaixa\n";
    } else if ((a - b) % 2 != 0) {
      std::cout << "nao encaixa\n";
    } else {
      std::cout << "encaixa\n";
    }
  }
}
