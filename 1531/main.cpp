#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

#define levec(v)                                                               \
  for (auto &i : v)                                                            \
  std::cin >> i
#define printvec(v, n)                                                         \
  for (int i = 0; i < n; i++) {                                                \
    if (i)                                                                     \
      std::cout << ' ';                                                        \
    std::cout << v[i];                                                         \
  };
#define endl '\n';
// m1 recebe o valor de m1 * m2: multiplica duas matrizes 2x2
//
//

long long pisano(long long m) {
  long long a = 0, b = 1, c = a + b;
  for (int i = 0; i < m * m; i++) {
    c = (a + b) % m;
    a = b;
    b = c;
    if (a == 0 && b == 1)
      return i + 1;
  }
}
void mult(long long m1[2][2], long long m2[2][2], long long mod) {
  long long aux[2][2] = {};
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        aux[i][j] += (m1[i][k] * m2[k][j]) % mod;
      }
    }
  }
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      m1[i][j] = aux[i][j] % mod;
    }
  }
}
// retorna se o bit shifLeft eh 1 ou 0
int getBit_64(long long n, int shiftLeft) {
  long long mask = (long long)1 << shiftLeft;
  if ((n & mask) != 0)
    return 1;
  return 0;
}
// retorna o índice do bit mais significativo
int msb_64(long long n) {
  for (int i = 63; i >= 0; i--) {
    if (getBit_64(n, i) == 1)
      return i;
  }
  return -1;
}
long long fib(long long n, long long mod) {
  if (n == 0)
    return 0;
  int msb = msb_64(n);
  long long resp[2][2] = {{1, 0}, {0, 1}}; // matriz identidade
  long long fator[2][2] = {{1, 1}, {1, 0}};
  for (int i = 0; i <= msb; i++) {
    if (getBit_64(n, i) == 1) {
      mult(resp, fator, mod);
    }

    mult(fator, fator, mod);
  }
  return resp[0][1];
}
ll fib2(int n) {
  ll a = 0, b = 1, c;
  if (n == 0)
    return 0;
  for (int i = 2; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  return b;
}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  ll n, m;
  while (std::cin >> n >> m) {
    ll pis = pisano(m);
    std::cout << fib(fib(n, pis), m) << '\n';
    // std::cout << fib(fib2(n), m) << '\n';
  }
}
