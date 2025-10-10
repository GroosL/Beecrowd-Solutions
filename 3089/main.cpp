#include <bits/stdc++.h>

int main() {
  int n;
  while (std::cin >> n) {
    if (n == 0)
      break;
    std::vector<int> arr(2 * n);
    for (auto &x : arr) {
      std::cin >> x;
    }
    std::sort(arr.begin(), arr.end());

    int s = arr.size();
    int menor{INT_MAX};
    int maior{INT_MIN};
    for (int i = 0; i < n; i++) {
      int soma = arr[i] + arr[2 * n - 1 - i];
      menor = std::min(menor, soma);
      maior = std::max(maior, soma);
    }
    std::cout << maior << ' ' << menor << '\n';
  }
}
