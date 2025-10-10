#include <bits/stdc++.h>

int main() {
  char c;
  std::string s;
  bool zero = true;
  while (std::cin >> c >> s && (c != '0' && s != "0")) {
    zero = true;
    std::string res;
    for (auto i : s) {
      if (i != c) {
        if (i != '0') {
          zero = false;
        }
        if (!zero) {
          res += i;
        }
      }
    }
    if (zero || res.empty()) {
      std::cout << "0\n";
    } else {
      std::cout << res << '\n';
    }
  }
}
