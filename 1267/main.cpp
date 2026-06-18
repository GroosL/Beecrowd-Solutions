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
  
  int n, d;
  while (std::cin >> n >> d && n && d) {
    std::vector<int> al(n);
    for (int i = 0; i < d; i++) {
      for (int j = 0; j < n; j++) {
        int x;
        std::cin >> x;
        if (x) al[j]++;
      }
    }
    std::cout << (*std::max_element(al.begin(), al.end()) >= d ? "yes\n" : "no\n");
  }
}
