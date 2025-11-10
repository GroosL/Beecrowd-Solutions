#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int x, y;
  std::cin >> x >> y;
  if (x > y) std::swap(x, y);
  int count{};
  for (int i = x + 1; i < y; i++) {
    if (i%2 != 0) count+=i; 
  }
  std::cout << count << '\n';
}
