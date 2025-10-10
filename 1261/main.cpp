#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int m, n;
  std::cin >> m >> n;
  std::unordered_map<std::string, int> mapa;
  for (int i = 0; i < m; i++) {
    std::string s;
    int v;
    std::cin >> s >> v;
    mapa.insert({s, v});
  }
  for (int i = 0; i < n; i++) {
    int count{};
    std::string s;
    while (std::cin >> s && s != ".") {
      auto it = mapa.find(s);
      if (it != mapa.end()) {
        count+=it->second;
      }
    }
    std::cout << count << '\n';
  }
}
