#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;
  std::cin.ignore();
  std::unordered_map<std::string, std::string> mapa;
  for (int i = 0; i < n; i++) {
   std::string ling;
   std::string trad;
   std::cin >> ling;
   std::cin.ignore();
   std::getline(std::cin, trad);
   mapa[ling] = trad;
  }
  int m;
  std::cin >> m;
  std::cin.ignore();
  for (int i = 0; i < m; i++) {
    std::string nome;
    std::string ling;
    std::getline(std::cin, nome);
    std::cin >> ling;
    std::cin.ignore();
    auto it = mapa.find(ling);
    std::cout << nome << '\n' << it->second << '\n';
   std::cout << '\n';
  }
}
