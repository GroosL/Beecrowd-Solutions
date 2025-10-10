#include <bits/stdc++.h>

int main() {
  std::string s;
  bool first = true;
  while (std::getline(std::cin, s)) {
    std::vector<int> freq(256, 0);
    for (char c : s) {
      freq[static_cast<unsigned char>(c)]++;
    }

    std::vector<std::pair<int, int>> res;
    for (int i = 0; i < 256; i++) {
      if (freq[i] > 0) {
        res.push_back({i, freq[i]});
      }
    }

    std::sort(res.begin(), res.end(), [](auto &a, auto &b) {
      if (a.second != b.second)
        return a.second < b.second;
      return a.first > b.first;
    });

    if (!first)
      std::cout << '\n';
    first = false;
    for (auto &it : res) {
      std::cout << it.first << ' ' << it.second << '\n';
    }
  }
}
