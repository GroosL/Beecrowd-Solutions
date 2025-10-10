#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  const std::string overflow = "2147483647";
  std::string s;

  while (std::getline(std::cin, s)) {
    std::string res;
    bool v = false;

    for (char c : s) {
      if (c >= '0' && c <= '9') {
        res.push_back(c);
      } else if (c == 'O' || c == 'o') {
        res.push_back('0');
      } else if (c == 'l') {
        res.push_back('1');
      } else if (c == ' ' || c == ',') {
        // ignora
      } else {
        v = true;
        break;
      }
    }

    if (v || res.empty()) {
      std::cout << "error\n";
      continue;
    }

    int i = 0;
    while (i + 1 < (int)res.size() && res[i] == '0') {
      i++;
    }
    res.erase(0, i);

    if (res.size() > overflow.size() ||
        (res.size() == overflow.size() && res > overflow)) {
      std::cout << "error\n";
    } else {
      std::cout << res << '\n';
    }
  }
}
