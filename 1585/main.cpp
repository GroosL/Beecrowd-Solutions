#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;
  while (n--) {
    int x, y;
    std::cin >> x >> y;
    std::cout << x * y / 2 << " cm2\n";
  }
}
