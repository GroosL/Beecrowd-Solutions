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
  
  int s;
  std::cin >> s;
  while (s--) {
    int n, i;
    double p;
    std::cin >> n >> p >> i;
    if (p == 0.0) {
      std::cout << "0.0000\n";
      continue;
    }

    if (p == 1.0) {
      if (i == 1) std::cout << "1.0000\n";
      else std::cout << "0.0000\n";
      continue;
    }

    std::cout << std::fixed << std::setprecision(4) << p * pow(1.0 - p, i - 1) / (1.0 - pow(1.0 - p, n)) << '\n';
  }
}
