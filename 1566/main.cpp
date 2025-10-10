#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int nc;
  std::cin >> nc;
  for (int i = 0; i < nc; i++) {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (auto &x : arr) {
      std::cin >> x;
    }
    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
      if (i>0) std::cout << ' ';
      std::cout << arr[i];
    }
    std::cout << '\n';
  }
}
