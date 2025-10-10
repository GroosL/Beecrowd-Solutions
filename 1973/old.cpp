#include <bits/stdc++.h>

int main() {
  int n{}, total{};
  std::cin >> n;
  std::vector<int> arr(n);
  for (auto &x : arr) {
    std::cin >> x;
    total+=x;
  }
  
  int count{}, atual{};
  bool possivel = true;
  while (possivel) {
    if (arr[atual] <= 0) {
      possivel = false;
      break;
    }
    if (arr[atual] % 2 == 0) {
      if (atual + 1 >= n) break; 
      atual++;
      arr[atual]--;
      count++;
    }
    else {
      if (atual - 1 < 0) break;
      atual--;
      arr[atual]--;
      count++;
    }
  }
  std::cout << count << ' ' << total - count << '\n';
}
