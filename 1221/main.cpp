#include <cmath>
#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  unsigned long long n;
  std::cin >> n;

  if (n < 2) {
    std::cout << "N\n";
    return 0;
  }
  for (int i = 3; i <= sqrt(n); i+= 2) {
    if (n % i == 0) {
      std::cout << "N\n";
      return 0;
    }
  }
  std::cout << "Y\n";
}
