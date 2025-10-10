#include <bits/stdc++.h>

int longestCommonSubsequence(std::string text1, std::string text2) {
  int n = text1.size();
  int m = text2.size();
  std::vector<std::vector<int>>dp(n+1,std::vector<int>(m+1));
  
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (text1[i-1] == text2[j-1]) {
        dp[i][j] = dp[i-1][j-1] + 1; 
      }
      dp[i][j] = std::max(dp[i][j], dp[i-1][j]);
      dp[i][j] = std::max(dp[i][j], dp[i][j - 1]);
    }
  }
  return dp[n][m];
}

int main() {
  int n;
  while (std::cin >> n && n) {
    std::cin.ignore();
    std::vector<std::string> arr(n);
    for (auto &x : arr) {
      std::cin >> x;
    }
    int maior{};
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (j == i)
          continue;
        maior = std::max(maior, longestCommonSubsequence(arr[i], arr[j]));
      }
    }
    std::cout << maior << '\n';
  }
}
