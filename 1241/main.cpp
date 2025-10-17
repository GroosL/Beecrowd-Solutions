#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;
  while (t--) {
    std::string a, b;
    std::cin >> a >> b;
    
    if (a.size() >= b.size() && a.substr(a.size() - b.size()) == b) std::cout << "encaixa\n";
    else std::cout << "nao encaixa\n";
  }
}
