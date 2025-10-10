#include <iostream>

int main() {
  int h, m;

  while (std::cin >> h >> m) {
    if (h / 30 < 10) {
      std::cout << '0' << h / 30 << ':';
    } else {
      std::cout << h / 30 << ':';
    }
    if (m / 6 < 10) {
      std::cout << '0' << m / 6;
    } else {
      std::cout << m / 6;
    }
    std::cout << '\n';
  }
}
