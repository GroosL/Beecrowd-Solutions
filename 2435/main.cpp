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
  
  int n1, d1, v1, n2, d2, v2;
  std::cin >> n1 >> d1 >> v1 >> n2 >> d2 >> v2;
  double t1 = (double)d1/v1;
  double t2 = (double)d2/v2;

  std::cout << (t1 < t2 ? n1 : n2) << '\n';
}
