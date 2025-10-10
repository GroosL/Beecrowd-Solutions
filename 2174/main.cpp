#include <bits/stdc++.h>

int main() {
  int n{};
  std::cin >> n;
  std::set<std::string> pokes;
  for (int i = 0; i < n; i++) {
    std::string s;
    std::cin >> s;
    pokes.insert(s);
  }
  std::cout << "Falta(m) " << 151 - pokes.size() << " pomekon(s).\n";
}
