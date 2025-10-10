#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;

  int anos = n / 365;
  n %= 365;
  int meses = n / 30;
  n %= 30;

  std::cout << anos << " ano(s)\n";
  std::cout << meses << " mes(es)\n";
  std::cout << n << " dia(s)\n";
}
