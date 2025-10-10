#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;
  std::vector<int> arr(n);
  for (auto &x : arr) {
    std::cin >> x;
  }
  std::vector<int> dp(n+1, 0);
  for (int i = 1; i < n; i++) {
    dp[i]=std::max(arr[n - i],arr[i]) + dp[i - 1];
  }
  std::cout << dp[n];
}
