#include <iostream>

int main() {
  long long a, b;
  while (std::cin >> a >> b) {
    if (a > b) {
      std::cout << a - b << '\n';
    } else {
      std::cout << b - a << '\n';
    }
  }
}
