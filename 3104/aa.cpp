#include <cstdint>
#include <iostream>
#include <string>

int main() {
  uint64_t a;
  long long b{};
  std::cin >> a;
  std::cin >> b;

  std::cout << a % b<< '\n';
}
