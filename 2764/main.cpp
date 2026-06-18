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
  
  int d,m,a;
  scanf("%d/%d/%d", &d, &m, &a);
  printf("%02d/%02d/%02d\n", m, d, a);
  printf("%02d/%02d/%02d\n", a, m, d);
  printf("%02d-%02d-%02d\n", d,m,a);
}
