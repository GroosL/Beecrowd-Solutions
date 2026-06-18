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
  std::cin >> n;
  while (n--) {
    std::string s;
    std::cin >> s;
    if (s[0] == s[2]) {
      std::cout << (s[0] - '0') * (s[2] - '0') << '\n';
    }
    else if (std::isupper(s[1])) {
      std::cout << (s[2] - '0') - (s[0] - '0') << '\n';
    }
    else {
      std::cout << (s[2] - '0') + (s[0] - '0') << '\n';
    }
  }
}
