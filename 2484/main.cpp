#include <bits/stdc++.h>

int main() {
  std::string s;
  bool first = true;
  while (std::cin >> s) {
    if (!first) std::cout << '\n';
    first = false;
    int esp{};
    for (int j = 0; j < s.size(); j++) {
      for (int k = 0; k < esp; k++) {
        std::cout << ' ';
      }
      for (int i = 0; i < s.size() - esp; i++) {
        if (i) std::cout << ' ';
        std::cout << s[i];
      }
      std::cout << '\n';
      esp++;
    }
  }
  std::cout << '\n';
}
