#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  
  int n;
  std::cin >> n;
  while (n--) {
    std::string a,b;
    std::cin >> a >> b;
    if (a.size() < b.size()) {
      std::cout << "nao encaixa\n";
      continue;
    }

    if (a.substr(a.size() - b.size()) == b) {
      std::cout << "encaixa\n";
    }
    else {
      std::cout << "nao encaixa\n";
    }
  }
}
