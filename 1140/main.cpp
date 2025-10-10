#include <bits/stdc++.h>

int main() {
  std::string s;
  while (true) {
    std::getline(std::cin, s);
    if (s == "*")
      return 0;

    char first = std::tolower(s[0]);
    bool res{true};

    for (int i = 1; i < s.size(); i++) {
      if (s[i] == ' ' && i + 1 < s.size()) {
        if (std::tolower(s[i + 1]) != first) {
          res = false;
          break;
        }
      }
    }
    std::cout << (res ? 'Y' : 'N') << '\n';
  }
}
