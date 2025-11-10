#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  char c;
  std::cin >> c;
  std::cin.ignore();
  std::string s;
  std::getline(std::cin, s);
  
  std::istringstream iss(s);
  
  int count{}, total{};
  while (iss) {
    std::string a;
    iss >> a;
    if (a.size() == 0) continue;
    total++;

    for (auto i : a) {
      if (i == c) {
        count++;
        break;
      }
    }
  }
  std::cout << std::fixed << std::setprecision(1) << (double)count / (double)total * 100 << '\n';
}
