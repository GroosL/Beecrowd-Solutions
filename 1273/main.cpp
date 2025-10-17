#include <bits/stdc++.h>

int main() {
  int n;
  bool f = true;
  while (std::cin >> n && n) {
    if (!f) std::cout << '\n';
    f = false;
    std::vector<std::string> v(n);
    int mx{-1};

    for (auto& i : v) {
      std::cin >> i;
      if ((int)i.size() > mx) mx = i.size();
    }

    for (auto str : v) {
      std::cout << std::setw(mx) << str << '\n';
    }
  }
}
