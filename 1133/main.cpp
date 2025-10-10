#include <bits/stdc++.h>

int main() {
  int x, y;
  std::cin >> x >> y;
  
  if (y < x) {
    x^=y;
    y^=x;
    x^=y;
  }
  for (int i = ++x; i<y; i++) {
    if (i%5 == 2 || i %5 == 3) {
      std::cout << i << '\n';
    }
  }
}
