#include <bits/stdc++.h>

int main() {
  int n{-1}, cidade{};
  bool f = true;
  while (std::cin >> n && n) {
    if (cidade) {
      std::cout << '\n';
    }
    std::vector<std::pair<int, double>> arr(n);
    int consumo{}, pessoas{};
    for (int i = 0; i < n; i++) {
      int x, y;
      std::cin >> x >> y;
      pessoas += x;
      consumo += y;
      arr[i] = {x, (double)y / x};
    }
    std::sort(arr.begin(), arr.end());
    std::cout << "Cidade# " << ++cidade << ":\n";
    bool first = true;
    for (int i = 0; i < arr.size(); i++) {
      if (i > 0)
        std::cout << ' ';
      std::cout << arr[i].first << "-" << (int)arr[i].second;
    }
    double consumo_medio = (double)consumo / pessoas;
    consumo_medio = std::floor(consumo_medio * 100) / 100;

    std::cout << "Consumo medio: " << std::fixed << std::setprecision(2)
              << consumo_medio << " m3.\n";
  }
}
