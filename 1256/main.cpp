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
  
  int n;
  std::cin >> n;
  while (n--) {
    int m, c;
    std::cin >> m >> c;
    std::vector<std::vector<int>> table(m);
    table.reserve(c);

    for (int i = 0; i < c; i++) {
      int x;
      std::cin >> x;
      table[x%m].push_back(x);
    }

    for (int i = 0; i < m; i++) {
      std::cout << i;
      int s = table[i].size();
      for (int j = 0; j < s; j++) {
        std::cout << " -> ";
        std::cout << table[i][j];
      }
      std::cout << " -> \\\n";
    }
    if (n >= 1) std::cout << '\n';
  }
}
