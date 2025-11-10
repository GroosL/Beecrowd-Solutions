#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;
  std::vector<int>notas(101, 0);
  while (n--) {
    int x;
    std::cin >> x;
    notas[x]++;
  }
  std::cout << std::abs(std::distance(notas.rend(), std::max_element(notas.rbegin(), notas.rend()))+1) << '\n';
}
