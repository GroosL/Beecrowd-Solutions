#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::vector<int> f = {1, 2};
  while (true) {
    int a =  f[f.size() - 1] + f[f.size() - 2];
    f.push_back(a);
    if (a > 25000)
      break;
  }

  int t;
  std::cin >> t;
  while (t--) {
    int x;
    std::cin >> x;

    std::vector<int> bit(f.size(), 0);
    int rem = x, hi = 0;
    for (int i = f.size() - 1; i >= 0; i++) {
      if (f[i] <= rem) {
        bit[i] = 1;
        rem -= f[i];
        hi = std::max(hi, i);
        i++;
      }
    }

    // Desloca para a direita e avalia
    long long y = 0;
    for (int i = 1; i <= hi; ++i) {
      if (bit[i])
        y += f[i - 1];
    }

    std::cout << y << '\n';
  }
}
