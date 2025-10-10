#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  std::cin.ignore();
  for (int i = 0; i < n; i++) {
    std::string s;
    std::getline(std::cin, s);
    int m = s.size();
    for (int i = m / 2 - 1; i >= 0; i--) {
      std::cout << s[i];
    }
    for (int i = m - 1; i >= m / 2; i--) {
      std::cout << s[i];
    }
    std::cout << '\n';
  }
}
