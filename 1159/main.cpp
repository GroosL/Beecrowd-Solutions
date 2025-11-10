#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int x;
  while (std::cin >> x && x) {
    int count{};
    if (x % 2 != 0)
      x++;
    for (int i = 0; i < 5; i++) {
      count += x;
      x += 2;
    }
    std::cout << count << '\n';
  }
}
