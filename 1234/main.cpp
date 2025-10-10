#include <bits/stdc++.h>

int main() {
  std::string s;
  while (std::getline(std::cin, s)) {
    int count = 0;
    for (char c : s) {
      if (std::isalpha(c)) {
        if (count % 2 == 0)
          std::cout << (char)std::toupper(c);
        else
          std::cout << (char)std::tolower(c);
        count++;
      } else {
        std::cout << c;
      }
    }
    std::cout << '\n';
  }
}
