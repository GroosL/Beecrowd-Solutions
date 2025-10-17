#include <bits/stdc++.h>

bool p = false;
int l, c, r1, r2, tam, circ, circ2;

void solve() {
  double x = l - r1 - r2;
  double y = c - r1 - r2;

  if (x * y + y * y >= (r1+r2)*(r1+r2) && std::min(l, c) >= 2*std::max(r1,r2)) p = true;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  while (std::cin >> l >> c >> r1 >> r2 && l && c && r1 && r2) {
    p = false;
    solve();

    if (p)
      std::cout << "S\n";
    else
      std::cout << "N\n";
  }
}
