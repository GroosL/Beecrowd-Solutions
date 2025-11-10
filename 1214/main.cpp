#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int c;
  std::cin >> c;
  while (c--) {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (auto& i : v) std::cin >> i;

    double soma = std::accumulate(v.begin(), v.end(), 0);
    int count{};
    double media = soma / n;
    for (int i  : v) {
      if (i > media) count++;
    }
    std::cout << std::fixed << std::setprecision(3) << (double)count / n * 100 << "%\n";
  }
}
