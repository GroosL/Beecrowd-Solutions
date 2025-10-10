#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  std::cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++) {
    std::string s;
    std::getline(std::cin, s);
    stringstream ss(s);
    set<string> itens;
    string item;
    while (ss >> item) {
      itens.insert(item);
    }
    bool first = true;
    for (auto &x : itens) {
      if (!first)
        cout << ' ';
      cout << x;
      first = false;
    }
    cout << '\n';
  }
}
