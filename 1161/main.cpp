#include <iostream>
#include <ostream>

int main() {
  int m, n{};

  while (std::cin >> m >> n) {
    long long f1 = 1, f2 = 1;
    for (long long i = 1; i <= m; i++) {
      f1 *= i;
    }
    for (long long i = 1; i <= n; i++) {
      f2 *= i;
    }
    std::cout << f1 + f2 << std::endl;
  }
}
