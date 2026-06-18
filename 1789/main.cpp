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
  
  int n;
  while (std::cin >> n) {
    int maior{-1};
    for (int i = 0; i < n; i++) {
      int x;
      std::cin >> x;
      maior = std::max(x, maior);
    }
    if (maior < 10) std::cout << 1 << '\n';
    else if (maior >= 20) std::cout << 3 << '\n'; 
    else std::cout << "2\n";
  }
}
