#include <bits/stdc++.h>

int lcs(std::string &s1, std::string &s2) {
  int m = s1.size();
  int n = s2.size();
  int maxl{};

  std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));


  for (int i = 1; i <= m; ++i) {
    for (int j = 1; j <= n; ++j) {
      if (s1[i - 1] == s2[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1] + 1;
        maxl = std::max(maxl, dp[i][j]);
      }
    }
  }

  return maxl;
}

int main() {
  std::string s1, s2;
  while (std::getline(std::cin, s1)) {
    std::getline(std::cin, s2);
    std::cout << lcs(s1, s2) << '\n';
  }
}
