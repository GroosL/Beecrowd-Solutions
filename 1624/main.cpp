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
  int n;
  while (std::cin >> n && n) {
    std::vector<int> val(n);
    std::vector<int> pes(n);
    for (int i = 0; i < n; i++) {
      std::cin >> val[i];
      std::cin >> pes[i];
    }
    int p;
    std::cin >> p;
    std::cout << solve(p, val, pes) << '\n';
  }
}
