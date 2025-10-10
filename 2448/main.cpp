#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n, m;
  std::cin >> n >> m;

  std::vector<long long> casas(n);
  for (auto &x : casas) {
    std::cin >> x;
  }

  std::unordered_map<long long, int> mapa(n);
  for (int i = 0; i < n; i++)
    mapa[casas[i]] = i;

  long long count{};
  int p{};

  for (int i = 0; i < m; i++) {
    long long input;
    std::cin >> input;
    int d = mapa[input];
    count += std::llabs(d - p);
    p = d;
  }

  std::cout << count << '\n';
}
