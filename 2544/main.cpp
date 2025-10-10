#include <bits/stdc++.h>

int main() {
  unsigned long long int n;
  while (std::cin >> n) {
    std::cout << int(log(n) / log(2)) << '\n';
  }
}
