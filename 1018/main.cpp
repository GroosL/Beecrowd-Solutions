#include <bits/stdc++.h>

int main() {
  int_fast32_t valor{};
  std::cin >> valor;

  int_fast32_t valoro{valor};

  int_fast32_t cem{valor / 100};
  valor %= 100;

  int_fast32_t cinquenta{valor / 50};
  valor %= 50;

  int_fast32_t vinte{valor / 20};
  valor %= 20;

  int_fast32_t dez{valor / 10};
  valor %= 10;

  int_fast32_t cinco{valor / 5};
  valor %= 5;

  int_fast32_t dois{valor / 2};
  valor %= 2;

  int_fast32_t um{valor};

  std::cout << valoro << "\n"
            << cem << " nota(s) de R$ 100,00\n"
            << cinquenta << " nota(s) de R$ 50,00\n"
            << vinte << " nota(s) de R$ 20,00\n"
            << dez << " nota(s) de R$ 10,00\n"
            << cinco << " nota(s) de R$ 5,00\n"
            << dois << " nota(s) de R$ 2,00\n"
            << um << " nota(s) de R$ 1,00\n";
}
