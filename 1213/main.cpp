#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::vector<ull> dp(10001, 0);
  while (std::cin >> n) {
    int tam{}, num{1}, prox{1};
    if (dp[n] != 0) {
      std::cout << dp[n] << '\n';
      continue;
    }
    
    while (num) {
      num = prox % n;
      prox = (prox*10+1) % n;
      tam++;
    }
    dp[n] = tam;
    std::cout << tam << '\n';
  }
}
