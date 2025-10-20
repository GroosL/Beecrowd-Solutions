#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  while (std::cin >> n) {
    std::vector<std::pair<std::pair<int, int>, int>> v(n);
    for (int i = 0; i < n; i++) {
      int a, b;
      std::cin >> a >> b;
      v[i].first = {a, b};
      v[i].second = b - a;
    }

    std::sort(v.begin(), v.end(), [](auto &left, auto &right) {
      return left.second < right.second;
    });

    auto mx = std::max_element(v.begin(), v.end());
    auto mn = std::min_element(v.begin(), v.end());

    std::set<int> a;
    for (int i = mn->first.first; i <= mx->first.second + 1; i++)
      a.insert(i);

    int count{}, i{n - 1};
    while (!a.empty()) {
      for (int j = v[i].first.first; j <= v[i].first.second; j++) {
        a.erase(j);
      }
      count++;
      i--;
    }
  std::cout << count / 2 << '\n';
}
}
