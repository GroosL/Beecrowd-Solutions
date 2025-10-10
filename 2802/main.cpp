#include <iostream>

int main() {
  unsigned long long int n, res = 1;
  std::cin >> n;

  for (unsigned long long int i = 1; i < n; i++) {
    res *= 2;
  }
  std::cout << res << std::endl;
}
