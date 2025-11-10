#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::string s;
  std::pair<std::string, int> maior = {"", 0};
  while (std::getline(std::cin, s) && s!="0") {
    std::istringstream iss(s);
    bool f = true;
    while (iss) {
      std::string w;
      iss >> w;
      int size = w.size();
      if (size == 0)  {
        std::cout << '\n';
        continue;
      }
      if (!f) std::cout << '-';
      f = false;
      std::cout << size;
      if (size >= maior.second) {
        maior = {w, size};
      }
    }
  }
  std::cout << "\nThe biggest word: " << maior.first << '\n';
}
