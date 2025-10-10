#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  std::cin.ignore();
  for (int i = 0; i < n; i++) {
    std::string s;
    std::getline(std::cin, s);
    
    if (std::isalnum(s[0])) std::cout << s[0];
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == ' ' && i + 1 < s.size() && std::isalpha(s[i+1])) {
        std::cout << s[i+1];
      }
    }
    std::cout << '\n';
  }
}
