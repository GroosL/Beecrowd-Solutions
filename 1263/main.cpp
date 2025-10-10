#include <bits/stdc++.h>

int main() {
  std::string s;
  while (std::getline(std::cin, s)) {
    std::istringstream is(s);
    std::vector<int> alfabeto(26, 0);
    bool p = false;
    int soma{};
    std::string sub;
    char prev = '0';
    while (is >> sub) {
      char c = std::tolower(sub[0]);
      if (prev == c) {
        if (!p) {
          soma++;
          p = true;
        }
      } else {
        p = false;
      }
      prev = c;
    }
    std::cout << soma << '\n';
  }
}
