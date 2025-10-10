#include <bits/stdc++.h>

int main() {
  int n, soma{};
  std::cin >> n;
  std::vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
    soma += arr[i];
  }
  bool pode = true;
  int i = 1, roubos = 1;
  arr[0]--;
  while (i >= 0 && i < n) {
    if (arr[i] % 2 == 0 && arr[i] > 0) {
      i--;
      roubos++;
      arr[i]--;

    } else if (arr[i] > 0) {
      i++;
      roubos++;
      arr[i]--;
    }
  }

  std::cout << roubos << ' ' << soma - roubos << '\n';
}
