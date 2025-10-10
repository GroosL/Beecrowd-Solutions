#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n, k;
  int i{};
  while (std::cin >> n >> k) {
    if (n == 0 && k == 0)
      return 0;
    std::vector<std::string> v(n);
    for (auto &i : v)
      std::cin >> i;

    for (int i = 0; i < n - 1 && k > 0; i++) {
      int m = i;
      for (int j = i + 1; j < n && j - i <= k; j++) {
        if (v[j] < v[m])
          m = j;
      }

      for (int j = m; j > i; j--) {
        std::swap(v[j], v[j-1]);
        k--;
      }
    }

    std::cout << "Instancia " << ++i << '\n';
    for (auto i : v)
      std::cout << i << ' ';
    std::cout << "\n\n";
  }
}
