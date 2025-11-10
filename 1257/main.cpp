#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;
  while (n--) {
    int l;
    std::cin >> l;
    int count{};
    for (int i = 0; i < l; i++) {
      std::string s;
      std::cin >> s;
      for (int j = 0; j < s.size(); j++) {
        count += (s[j] - 'A') + i + j;
      }
    }
    std::cout << count << '\n';
  }
}
