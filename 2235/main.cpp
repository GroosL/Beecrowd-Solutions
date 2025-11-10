#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a,b,c;
  std::cin >> a >> b >> c;
  if (a - b == 0 || a - c == 0 || b - c == 0 || a+b-c == 0 || a+c-b == 0 || c+b-a == 0) std::cout << "S\n";
  else std::cout << "N\n";
}
