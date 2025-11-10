#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int n;
  std::cin >> n;
  std::vector<int> arr(n);
  for (auto &x : arr) {
    std::cin >> x;
  }
  int count{};

  std::vector<int> flechas(1000000 + 2, 0);

  for (int i : arr) {
    if (flechas[i] > 0) {
      flechas[i]--;
      flechas[i - 1]++;
    } else {
      count++;
      flechas[i - 1]++;
    }
  }
  std::cout << count << '\n';
}
