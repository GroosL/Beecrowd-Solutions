#include <bits/stdc++.h>

int main() {
  std::string s;
  double soma{};
  int count{};
  while (getline(std::cin, s)) {
    int x;
    std::cin >> x;
    std::cin.ignore();

    soma+=x;
    count++;
  }
  std::cout << std::fixed << std::setprecision(1) << soma / count << '\n';
}
