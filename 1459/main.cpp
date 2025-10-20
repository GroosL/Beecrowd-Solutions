#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  while (std::cin >> n) {
    std::vector<std::pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
      std::cin >> v[i].first >> v[i].second;
    }

    std::sort(v.begin(), v.end(), [](auto &a, auto &b) {
      if (a.second == b.second)
        return a.first < b.first;
      return a.second < b.second;
    });

    int count{};
    int ult{-1};

    for (auto [a,b] : v) {
      if (a > ult) {
        count++;
        ult = b;
      }
    }
    std::cout << count << '\n';
  }
}
