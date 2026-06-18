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
  
  std::vector<int> v(3);
  levec(v);
  std::vector<int> s = v;
  std::sort(s.begin(), s.end());

  for (int x : s) {
    std::cout << x << '\n';
  }
  std::cout << '\n';
  for (int x : v) {
    std::cout << x << '\n';
  }
}
