#include <bits/stdc++.h>

int n, m;

std::vector<long long> c(3);

bool solve(int i, long long soma) {
  if (i == n)
    return soma == 0;

  for (int d = -(m - 1); d < m; d++) {
    if (d != 0)
      if (solve(i + 1, soma + c[i] * d))
        return 1;
  }
  return 0;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  while (std::cin >> n >> m) {
    for (int i = 0; i < n; i++)
      std::cin >> c[i];

    if (solve(0, 0))
      std::cout << "Try again later, Denis...\n";
    else
      std::cout << "Lucky Denis!\n";
  }
}
