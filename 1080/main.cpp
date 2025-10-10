#include <bits/stdc++.h>

int main() {
  int maior{}, ind{};
  for (int i = 0; i < 100; i++) {
    int input;
    std::cin >> input;
    if (input > maior) {
      maior = input;
      ind = i;
    }
  }
  std::cout << maior << '\n' << ind + 1 << '\n';
}
