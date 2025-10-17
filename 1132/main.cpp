#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int x, y;
  std::cin >> x >> y;
  if (x > y) std::swap(x, y);
  
  int soma{};
  for (int i = x; i <= y; i++) {
    if (i%13!=0)soma += i;
  }
  std::cout << soma << '\n';
}
