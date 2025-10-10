#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int c, n;
  while (std::cin >> c >> n) {
    int valor{};
    std::vector<std::pair<bool, int>> arr(10000, {false, 0});
    std::vector<int> start(10000, -1);
    std::vector<int> vagas(c, -1);

    for (int i = 0; i < n; i++) {
      char a;
      std::cin >> a;
      if (a == 'C') {
        int p, q;
        std::cin >> p >> q;

        int livre = 0;
        int ini = -1;
        for (int idx = 0; idx < c; ++idx) {
          if (vagas[idx] == -1) {
            ++livre;
            if (livre == q) {
              ini = idx - q + 1;
              break;
            }
          } else {
            livre = 0;
          }
        }

        if (ini != -1) {
          for (int k = ini; k < ini + q; ++k) vagas[k] = p;
          arr[p] = {true, q};
          start[p] = ini;
          valor += 10;
          // count += q; // se quisesse manter um total ocupado (não necessário)
        }
        // se não achou espaço contínuo, não cobra (igual intenção original)
      } else { // saída
        int p;
        std::cin >> p;
        if (arr[p].first) {
          int q = arr[p].second;
          int ini = start[p];
            for (int k = ini; k < ini + q; ++k) vagas[k] = -1;
          arr[p].first = false;
          start[p] = -1;
          // count -= q;
        }
      }
    }
    std::cout << valor << '\n';
  }
}
