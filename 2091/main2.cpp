#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  while (std::cin >> n && n != 0) {
    long long res = 0;
    for (int i = 0; i < n; i++) {
      long long x;
      std::cin >> x;
      res ^= x;
    }
    std::cout << res << '\n';
  }
}
