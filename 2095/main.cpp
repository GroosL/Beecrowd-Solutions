#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int s;
  std::cin >> s;
  std::vector<int> q(s);
  std::vector<int> n(s);
  for (auto &i  : q) {
    std::cin >> i;
  }
  for (auto& i: n) std::cin >> i;

  std::sort(q.begin(), q.end());
  std::sort(n.begin(), n.end());
  
  long long i1{}, i2{};
  long long count{};

  while (i1 < s && i2 < s) {
    if (n[i1] > q[i2]) {
      i2++;
      i1++;
      count++;
    } 
    else {
      i1++;
    }
  }
  std::cout << count << '\n';
}
