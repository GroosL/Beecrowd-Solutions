#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  long long n;
  while (std::cin >> n) {
    if (n == 0)
      return 0;

    long long res{}, x{};

    for (long long i = 0; i < n; i++) {
      std::cin >> x;
      res^=x;
    }
    std::cout << res << '\n';
  }
}
