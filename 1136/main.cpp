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
  
  int n, b;
  while (std::cin >> n >> b && (n || b)) {
    std::vector<int> bolas(b);
    levec(bolas);

    std::vector<bool> v(n+1, 0);
    for (int i = 0; i < b; i++) {
      for (int j = 0; j < b; j++) {
        v[std::abs(bolas[i]-bolas[j])]=1;
      }
    }

    bool f{1};
    for (auto i : v) if (!i) f=0;

    std::cout << (f ? "Y\n" : "N\n");
  }
}
