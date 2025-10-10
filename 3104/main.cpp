#include <iostream>
#include <string>

int main() {
  std::string a_str;
  long long b{};
  std::cin >> a_str;
  std::cin >> b;

  int resto{};
  for (char a : a_str) {
    int digito = a - '0';
    resto = (resto * 10 + digito) % b;
  }
  std::cout << resto << '\n';
}
