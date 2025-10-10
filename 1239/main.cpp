#include <bits/stdc++.h>

int main() {
  std::string s;
  while (std::getline(std::cin, s)) {
    bool iO = false, bO = false; 
    for (char c : s) {
      if (c == '_' && !iO) {
        std::cout << "<i>";
        iO = true;
      }
      else if (c == '_') {
        std::cout << "</i>";
        iO = false;
      }
      else if (c == '*' && !bO) {
        std::cout << "<b>";
        bO = true;
      }
      else if (c == '*') {
        std::cout << "</b>";
        bO = false;
      }
      else {
        std::cout << c;
      }
    }
    std::cout << '\n';
  }
}
