#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::vector<std::string> s(2);
    for (auto &x : s) {
      std::cin >> x;
    }
    int size = std::max(s[0].size(), s[1].size());

    for (int j = 0; j < size; j++) {
      if (j < s[0].size()) std::cout << s[0][j];
      if (j < s[1].size()) std::cout << s[1][j];
    }
    std::cout << '\n';
  }
}
