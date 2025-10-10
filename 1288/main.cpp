#include <bits/stdc++.h>

int solve(int p, std::vector<int> &val, std::vector<int> &pes) {
  std::vector<int> dp(p + 1, 0);
  for (int i = 1; i <= pes.size(); i++) {
    for (int j = p; j >= pes[i - 1]; j--) {
      dp[j] = std::max(dp[j], dp[j - pes[i - 1]] + val[i - 1]);
    }
  }
  return dp[p];
}

int main() {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    std::cin >> n;
    std::vector<int> val(n);
    std::vector<int> pes(n);
    for (int j = 0; j < n; j++) {
      std::cin >> val[j];
      std::cin >> pes[j];
    }
    int p;
    std::cin >> p;
    int k;
    std::cin >> k;
    solve(p, val, pes) >= k ? std::cout << "Missao completada com sucesso\n"
                            : std::cout << "Falha na missao\n";
  }
}
