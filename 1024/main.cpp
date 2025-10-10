#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

int main() {
  int cases;
  std::cin >> cases;
  for (int i = 0; i < cases; i++) {
    std::string a;
    std::cin >> std::ws;
    std::getline(std::cin, a);
    for (int i = 0; i < a.size(); i++) {
      if (std::isalpha(a[i])) {
        a[i] = a[i] + 3;
      }
    }
    std::reverse(a.begin(), a.end());
    for (int i = a.size() / 2; i < a.size(); i++) {
      if (a[i] != ' ') {
        a[i] = a[i] - 1; 
      }
    }
    std::cout << a << '\n';
  }
}
