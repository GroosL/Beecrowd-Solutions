#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int x;
  while (std::cin >> x && x) {
    for (int i = 1; i <= x; i++) {
      if (i!=1) std::cout << ' ';
      std::cout << i;
    }
    std::cout << '\n';
  }
}
