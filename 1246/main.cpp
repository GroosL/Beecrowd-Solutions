#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int c,n;
  while (std::cin >> c >> n) {
    int count{};
    int valor{};
    std::vector<std::pair<bool, int>> arr(9999);
    for (int i = 0; i < n; i++) {
      char a;
      std::cin >> a;
      if (a == 'C') {
        int p, q;
        std::cin >> p >> q;
        if (q + count <= c && !arr[p].first) { 
          count+=q;
          arr[p] = std::make_pair(true, q);
          valor+=10;
        }
      }
      else {
        int p;
        std::cin >> p;
        if (arr[p].first) {
          count-=arr[p].second;
          arr[p].first = false;
        }
      }
    }
    std::cout << valor << '\n';
  }
}
