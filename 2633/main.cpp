#include <bits/stdc++.h>

int main() {
  int n{};
  while (std::cin >> n) {
    std::vector<std::pair<int, std::string>> arr(n);
    std::string s;
    int v{};
    for (int i = 0; i < n; i++) {
      std::cin >> s >> v;
      arr[i] = std::make_pair(v, s);
    }
    std::sort(arr.begin(), arr.end());
    
    bool f = true;
    for (auto it : arr) {
      if (!f) std::cout << ' ';
      std::cout << it.second;
      f = false;
    }
    std::cout << '\n';
  }
}
