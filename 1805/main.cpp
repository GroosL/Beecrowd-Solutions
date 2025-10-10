#include <iostream>

int main() {
  unsigned long long int a{}, b{}, soma = 0;

  std::cin >> a >> b;

  for (long long i = a; i <= b; i++) {
    soma += i;
  }
  std::cout << soma << std::endl;
}
