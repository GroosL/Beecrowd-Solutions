#include <bits/stdc++.h>

int main() {
  int t;
  std::cin >> t;
  std::cin.ignore();
  int j{};
  while (t--) {
    std::string s, t1, t2;
    int soma1{}, soma2{};
    std::getline(std::cin,s);
    std::getline(std::cin,t1);
    std::getline(std::cin,t2);
    
    int n = s.size();
    for (int i = 0; i < n; i++) {
      if (t1[i] == s[i]) {
        soma1++;
      }
      if (t2[i] == s[i]) {
        soma2++;
      }
    }
    std::cout << "Instancia " << ++j << '\n';
    if (soma1 > soma2) {
      std::cout << "time 1\n";
    }
    else if (soma1 < soma2) {
      std::cout << "time 2\n";
    }
    else {
      std::cout << "empate\n";
    }
    std::cout << '\n';
  }
}
