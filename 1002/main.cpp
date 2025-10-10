#include <cstdio>
#include <iostream>

int main() {
  const double pi = 3.14159;

  double raio;

  std::cin >> raio;

  printf("A=%.4f\n", (raio*raio) * pi);
}
