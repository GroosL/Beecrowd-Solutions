#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  
  int x;
  bool t = true;
  while (std::cin >> x) {
    if (x != 0 && x != 1) {
      t= false;
    }
  }
  std::cout << (t ? "S\n" : "F\n");
}
