#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int x;
  std::cin >> x;
  
  for (int i = 0; i <= x; i++) {
    if (i % 2 != 0) std::cout << i << '\n';
  }
}
