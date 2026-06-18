#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

const int MOD{1000000007};

#define levec(v)                                                               \
  for (auto &i : v)                                                            \
  std::cin >> i
#define printvec(v, n)                                                         \
  for (int i = 0; i < n; i++) {                                                \
    if (i)                                                                     \
      std::cout << ' ';                                                        \
    std::cout << v[i];                                                         \
  };
#define endl '\n'

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  
  char op;
  std::cin >> op;
  std::vector<std::vector<double>> m(12, std::vector<double>(12));
  for (auto &i : m) for (auto &x : i) std::cin >> x;
  
  double sum{};
  double count{};
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < i; j++) {
      sum+=m[i][j];
      count++;
    }
  }
  std::cout << std::fixed << std::setprecision(1) << (op == 'S' ? sum : sum / count) << '\n';
}
