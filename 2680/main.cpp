#include <cmath>
#include <iostream>

unsigned long long divisores(unsigned long long x) {
  int soma;
  for (int i = 1; i <= sqrt(x); i++) {
    if (x % i == 0 ) {
      soma += i;
    }
  }
  return soma + x;
}

int main() {
  int n;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    unsigned long long x;
    std::cin >> x;

    std::cout << divisores(x) << '\n';
  }
}
