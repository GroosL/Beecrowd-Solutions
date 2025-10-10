#include <bits/stdc++.h>

int josephus(int n, int k) {
  int res{};
  for (int i = 2; i <=n; i++) {
    res = (res+k) % i;
  }
  return res;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int n;
  while (std::cin >> n) {
    if (n == 0) {
      break;
    }
    int k{1};
    while (true) {
      if (josephus(n - 1, k) == 11) {
        std::cout << k << '\n';
        break;
      } 
      k++;
    }
  }
}
