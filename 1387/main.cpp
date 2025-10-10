#include <iostream>

int main() {
  int l = 1, r = 1;
  while (1 == 1) {
    std::cin >> l >> r;
    if (l == 0 && r == 0) {
      return 0;
    }
    std::cout << l + r << '\n';
  }
  return 0;
}
