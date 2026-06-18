#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

const int MOD{1000000007};

int cont{};

#define levec(v) for (auto &i : v) std::cin >> i
#define printvec(v, n) for (int i = 0; i < n; i++) { if(i) std::cout << ' '; std::cout << v[i]; };
#define endl '\n'

void dfs(int node, std::vector<std::vector<int>> &a, std::vector<int> &vis) {
  if (vis[node] != -1) return;

  vis[node] = 1;

  for (auto child : a[node])
    dfs(child, a, vis);
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  
  int n, m;
  std::cin >> n >> m;
  std::vector<std::vector<int>> g(n+1);
  for (int i = 0; i < m; i++) {
    int a, b;
    std::cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  std::vector<int> vis(n+1, -1);
  for (int i = 1; i <= n; i++) {
    if (vis[i] == -1) {
      cont++;
      dfs(i, g, vis);
    }
  }

  std::cout << cont << '\n';
}
