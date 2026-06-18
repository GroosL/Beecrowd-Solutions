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
  
  int x;
  std::cin >> x;

  if (x == 61) std::cout << "Brasilia";
  else if (x == 71) std::cout << "Salvador";
  else if (x == 11) std::cout << "Sao Paulo";
  else if (x == 21) std::cout << "Rio de Janeiro";
  else if (x == 32) std::cout << "Juiz de Fora";
  else if (x == 19) std::cout << "Campinas";
  else if (x == 27) std::cout << "Vitoria";
  else if (x == 31) std::cout << "Belo Horizonte";
  else std::cout << "DDD nao cadastrado";
  std::cout << '\n';
}
