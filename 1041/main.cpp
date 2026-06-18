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
  
  double x, y;
  std::cin >> x >> y;
  if (x > 0 && y > 0) std::cout << "Q1\n";
  else if (x > 0 && y < 0) std::cout << "Q4\n";
  else if (x < 0 && y > 0) std::cout << "Q2\n";
  else if (x < 0 && y < 0) std::cout << "Q3\n";
  else if (x == 0.0 && y != 0.0) std::cout << "Eixo Y\n";
  else if (x != 0.0 && y == 0.0) std::cout << "Eixo X\n";
  else std::cout << "Origem\n";
}
