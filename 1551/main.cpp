#include <bits/stdc++.h>

int main() {
  int n{};
  std::cin >> n;
  std::cin.ignore();
  for (int i = 0; i < n; i++) {
    std::string s;
    std::getline(std::cin, s);
    std::set<char> letras;
    for (char c  : s) {
      if (std::isalnum(c)) {
        letras.insert(c);
      }
    }
    int r = letras.size();
    if (r == 26) {
      std::cout << "frase completa\n";
    }
    else if (r >= 13) {
      std::cout << "frase quase completa\n";
    }
    else {
      std::cout << "frase mal elaborada\n";
    }
  }
}
