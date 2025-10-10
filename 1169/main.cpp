#include <iostream>

int main() {
  int n{};
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    unsigned long long int x{}, trigo = 1;
    std::cin >> x;

    for (int j = 1; j <= x; j++) {
      trigo *= 2;
    }

    if (x == 64) {
      std::cout << "1537228672809129 kg\n";
    } else {
      std::cout << trigo / 12 / 1000 << " kg" << std::endl;
    }
  }
}
