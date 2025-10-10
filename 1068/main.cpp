#include <iostream>
#include <string>

int main() {
  std::string n;

  while (std::cin >> n) {
    int dir{}, esq{}, ordem{};
    for (int i = 0; i < n.size(); i++) {
      if (n[i] == ')') {
        esq++;
        if (esq > dir) {
          ordem++;
        }
      } else if (n[i] == '(') {
        dir++;
      }
    }
    if (esq == dir && ordem == 0) {
      std::cout << "correct\n";
    }
    else {
      std::cout << "incorrect\n";
    }
  }
}
