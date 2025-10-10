#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int n{};
  std::cin >> n;
  std::cin.ignore();
  for (int i = 0; i < n; i++) {
    std::string s;
    std::getline(std::cin, s);
    std::vector<int> alfabeto(26, 0);
    for (char c : s) {
      if (std::isalpha(c)) {
        alfabeto[tolower(c) - 97]++;
      }
    }
    int freqMax = *std::max_element(alfabeto.begin(), alfabeto.end());
    for (int j = 0; j < 26; j++) {
      if (alfabeto[j] == freqMax) {
        std::cout << (char)('a' + j);
      }
    }
    std::cout << '\n';
  }
}
