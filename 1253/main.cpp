#include <bits/stdc++.h>

int main() {
  std::cin.sync_with_stdio(false);
  std::cin.tie(nullptr);
  int n{};
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::string s;
    std::cin >> s;
    int k{};
    std::cin >> k;
    for (char c  : s) {
      if (c - k < 'A') {
        c+=26;
      }
      std::cout << char(c - k);
    }
    std::cout << '\n';
  }
}
