#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::unordered_map<std::string, double> mapa;
    int m;
    std::cin >> m;
    for (int j = 0; j < m; j++) {
      std::string s;
      double v;
      std::cin >> s >> v;
      mapa[s] = v;
    }
    int p;
    double valor{};
    std::cin >> p;
    for (int j = 0; j < p; j++) {
      std::string s;
      int q;
      std::cin >> s >> q;
      auto it = mapa.find(s);
      valor += it->second * q;
    }
    std::cout << "R$ " << std::fixed << std::setprecision(2) << valor << '\n';
  }
}
