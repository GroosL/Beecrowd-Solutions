#include <bits/stdc++.h>

int main() {
  int_fast32_t cA, cB, nA{}, nB{};
  double pA{}, pB{};
  
  std::cin >> cA >> nA >> pA >> cB >> nB >> pB;
  std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << pA * nA + pB * nB << '\n';
}
