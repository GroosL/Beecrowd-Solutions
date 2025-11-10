#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  
  int t;
  std::cin >>t;
  for (int i = 1; i<=t; i++) {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (auto &i : v) std::cin >>i;
    std::sort(v.begin(), v.end());

    std::cout << "Case " << i << ": " << v[n/2] << '\n';
  }
}
