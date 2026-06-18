#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

const int MOD{1000000007};

#define levec(v) for (auto &i : v) std::cin >> i
#define printvec(v, n) for (int i = 0; i < n; i++) { if(i) std::cout << ' '; std::cout << v[i]; };
#define endl '\n'

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  
  std::vector<std::vector<double>> m(12, std::vector<double>(12));

  char c;
  std::cin >> c;
  for (auto &x : m) levec(x);
  
  double sum{};
  int count{};
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j <= 10 - i; j++) {
      sum+=m[i][j];
      count++;
    }
  }
  std::cout << std::fixed << std::setprecision(1) << (c == 'S' ? sum : sum / count) << '\n';
}
