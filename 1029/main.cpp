#include <bits/stdc++.h>

int count;

int fib(int n) {
  count++;
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fib(n - 1) + fib(n - 2);
}

int main() {
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;
    count = -1;
    int result = fib(x);
    std::cout << "fib(" << x << ") = " << count << " calls = " << result << '\n';
  }
}
