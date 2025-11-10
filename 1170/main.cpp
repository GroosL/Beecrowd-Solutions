#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    double c;
    std::cin >> c;

    std::cout << std::ceil(std::log2(c)) << " dias\n";
  }
}
