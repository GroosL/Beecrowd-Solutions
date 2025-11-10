#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n, h, w;
  std::cin >> n >> h >> w;
  for (int i = 0; i < n; i++) {
    char ida, volta;
    std::cin >> ida >> volta;

    char lida = 'N', lvolta = 'N';
    if (ida == 'Y') {
      lida = 'Y';
      h--;
      w++;
    }
    else if (w == 0) {
      lida = 'Y';
      h--;
      w++;
    }
    if (volta == 'Y') {
      lvolta = 'Y';
      w--;
      h++;
    }
    else if (h == 0) {
      lvolta = 'Y';
      w--;
      h++;
    }
    std::cout << lida << ' ' << lvolta << '\n';
  }
}
