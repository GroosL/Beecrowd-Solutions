#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  std::cin.ignore();
  for (int i = 0; i < n; i++) {
    std::string s, sub;
    std::getline(std::cin, s);
    std::istringstream iss(s);
    std::vector<std::string> arr;
    while (iss >> sub) {
      arr.push_back(sub);
    }
    std::stable_sort(arr.begin(), arr.end(),
              [](const std::string &a, const std::string &b) {
                return a.length() > b.length();
              });
    bool first = true;
    for (auto s : arr) {
      if (!first) {
        std::cout << ' ';
      }
      std::cout << s;
      first = false;
    }
    std::cout << '\n';
  }
}
