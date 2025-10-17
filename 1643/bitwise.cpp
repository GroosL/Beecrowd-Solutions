#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::vector<int> fib = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711};

  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    int res{};
    std::bitset<21> bits;
    for (int i = 20; i >= 0; i--) {
      if (n < fib[i]) {
        continue;
      }
      n -= fib[i];
      bits[i] = 1;
    }
    bits >>= 1;
    for (int i = 0; i <= 20; i++) {
      if (bits[i] == 1) {
        res += fib[i];
      }
    }
    std::cout << res << '\n';
  }
}
