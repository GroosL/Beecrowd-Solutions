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
  int n;
  std::cin >> n;
  std::vector<int> v(n);
  levec(v);
  int count{};
  std::vector<int> p = v;
  std::sort(p.rbegin(), p.rend());
  for (int i = 0; i < n; i++) {
    if (v[i] == p[i]) count++;
  }
  std::cout << count<<'\n';
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

  cases();
  // solve();
}
