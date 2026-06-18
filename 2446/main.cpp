#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

const int MOD{1000000007};

#define levec(v) for (auto &i : v) std::cin >> i
#define printvec(v, n) for (int i = 0; i < n; i++) { if(i) std::cout << ' '; std::cout << v[i]; };
#define endl '\n'

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  
  int v, n;
  std::cin >> v >> n;
  std::vector<int> m(n);
  levec(m);

  std::vector<bool> dp(v+1, 0);
  dp[0] = 1;

  for (int c : m) {
    for (int i = v; i >= c; i--) {
      if (dp[i-c]) dp[i] = 1;
    }
  }

  std::cout << (dp[v] ? "S\n" : "N\n");
}
