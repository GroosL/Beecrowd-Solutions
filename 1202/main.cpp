#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
constexpr int INF = 1 << 30, MOD = 1e9 + 7;
constexpr ll LINF = 1LL << 62;

#define levec(v) for (auto &i : v) std::cin >> i
#define printvec(v, n) for (int i = 0; i < n; i++) { if(i) std::cout << ' '; std::cout << v[i]; };
#define endl '\n'

static const int buf_len = (1 << 14), buf_max = (1 << 04);
static char buf_out[buf_len], buf_num[buf_max];
static int buf_pos = 0;

inline void writeChar(int x){if(buf_pos==buf_len)fwrite(buf_out,1,buf_len,stdout),buf_pos=0;buf_out[buf_pos++]=x;}
inline void writeInt(int x,char end=0){if(x<0)writeChar('-'),x=-x;int n=0;do{buf_num[n++]=x%10+'0';}while(x/=10);while(n--)writeChar(buf_num[n]);if(end)writeChar(end);}
struct Flusher{~Flusher(){if(buf_pos)fwrite(buf_out, 1, buf_pos, stdout),buf_pos=0;}}flusher;
ll mulmod(ll a, ll b, ll mod) {
    return ((__int128)a * b) % mod;
}

// Binary exponentiation
ll powmod(ll base, ll exp, ll modulus) {
    base %= modulus;
    if (base < 0) base += modulus;
    ll result = 1;
    while (exp > 0) {
        if (exp & 1) result = mulmod(result, base, modulus);
        base = mulmod(base, base, modulus);
        exp >>= 1;
    }
    return result;
}
 
void mult(long long m1[2][2], long long m2[2][2], long long mod) {
  long long aux[2][2] = {};
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        __int128 tmp = aux[i][j];
        tmp += mulmod(m1[i][k], m2[k][j], mod);
        aux[i][j] = (long long)(tmp % mod);
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
long long fib(std::string s, long long mod) {
  long long resp[2][2] = {{1, 0}, {0, 1}}; // matriz identidade
  long long fator[2][2] = {{1, 1}, {1, 0}};
	for (char c : s) {
		mult(resp, resp, 10e2); // <<=1
		if (c == '1')
			mult(resp, fator, 10e2); // +1
	}
  return (resp[0][1] % mod + mod) % mod;
}
int t{};
void solve() {
	std::string s;
	std::cin >> s;

	std::cout << std::setfill('0') << std::setw(3) << fib(s, MOD) << '\n';
}

void cases() {
  std::cin >> t;
  while (t--) {
    solve();
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  cases();
  // solve();
}
