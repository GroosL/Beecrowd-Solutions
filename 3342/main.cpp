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

int t{};
void solve() {
	int n;
	std::cin >> n;
	n*=n;
	if (n%2 == 0) {
		std::printf("%d casas brancas e %d casas pretas\n", n/2, n/2);
	}
	else {
		std::printf("%d casas brancas e %d casas pretas\n", n/2+1, n/2);
	}
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

  // cases();
  solve();
}
