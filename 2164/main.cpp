#include <bits/stdc++.h>

uintmax_t fib(int n, std::vector<uintmax_t>& memo) {
  if (n <= 1) return n;
  if (memo[n] != -1) return memo[n];
  memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
  return memo[n];
}

int main() {
  int n{};
  std::cin >> n;
  std::vector<uintmax_t>memo(n + 1, -1);
  std::cout << fib(n, memo) << ".0\n";
}
