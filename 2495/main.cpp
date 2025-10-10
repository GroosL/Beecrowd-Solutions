#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  while (std::cin >> n) {
    unsigned long long int total{};
    for (int i = 1; i <= n; i++) {
      total+=i;
    }
    unsigned long long int soma{};
    std::vector<int> arr(n - 1);
    for (auto &x : arr) {
      std::cin >> x;
      soma+=x;
    }
    std::cout << total-soma << '\n';
  }
}
