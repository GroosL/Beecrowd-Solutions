#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
constexpr int INF = 1 << 30, MOD = 1e9 + 7;
constexpr ll LINF = 1LL << 62;

#define levec(v) for (auto &i : v) std::cin >> i
#define printvec(v, n) for (int i = 0; i < n; i++) { if(i) std::cout << ' '; std::cout << v[i]; };
#define endl '\n'

int t{};
void solve() {
  int r1, x1, y1, r2, x2, y2;
  while (std::cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) {
    double d = std::sqrt(((x1-x2)*(x1-x2)) + ((y1-y2) * (y1-y2)));
    std::cout << (r1 >= d + r2 ? "RICO\n" : "MORTO\n");
  }
}

void cases() {
  std::cin >> t;
  while (t--) {
    solve();
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  // cases();
  solve();
}
