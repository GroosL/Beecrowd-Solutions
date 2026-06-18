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
  double st{}, at{}, bt{};
  double sc{}, ac{}, bc{};
  while (n--) {
    std::string asd;
    std::cin >> asd;
    double s, a, b;
    std::cin >> s >> a >> b;
    st += s; at +=a; bt+=b;
    double s1, a1, b1;
    std::cin >> s1 >> a1 >> b1;
    sc += s1; ac += a1; bc += b1;
  }
  printf("Pontos de Saque: %.2lf %%.\n", sc / st * 100);;
  printf("Pontos de Bloqueio: %.2lf %%.\n", ac / at * 100);
  printf("Pontos de Ataque: %.2lf %%.\n", bc / bt * 100);
}
