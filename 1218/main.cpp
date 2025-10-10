#include <bits/stdc++.h>

int main() {
  int n;
  while (std::cin >> n) {
    std::string s;
    std::getline(std::cin, s);
    std::istringstream iss(s);
    int count{};
    std::vector<int> mf(2, 0);
    do {
      std::string sub;
      iss >> sub;
      if (std::isdigit(sub[0]) && std::stoi(sub) == n) {
        count++;
      } else if (sub[0] == 'M') {
        mf[0]++;
      } else {
        mf[1]++;
      }
    } while (iss);
  }
}
