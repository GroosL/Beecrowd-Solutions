#include <bits/stdc++.h>

#define MOD 1000000007;

uintmax_t solve(int n) {
  std::vector<unsigned long long>dp(n+1, 0);
  dp[0] = 1;
  if (n >= 1) dp[1] = 1;
  if (n >= 2) dp[2] = 2;
  for (int i = 3; i <= n; i++) {
    dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
  }
  return dp[n];
}

int main() {
  int n;
  std::cin >> n;
  std::cout << solve(n) << '\n';
}
