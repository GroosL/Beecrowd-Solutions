#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  while (std::cin >> n && n) {
    std::vector<int>v(n);
    for (auto& x: v) std::cin >> x;

    *std::max_element(v.begin(), v.end()) = 0;
    std::cout << std::distance(v.begin(), std::max_element(v.begin(), v.end())) + 1 << '\n';
  }
}
