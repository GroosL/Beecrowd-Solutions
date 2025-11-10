#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::string s;
  std::getline(std::cin, s);
  std::istringstream iss(s);
  
  bool f = true;
  while (iss) {
    std::string a;
    iss >> a;
    if (a.size() == 0) break; 
    if (!f) std::cout << ' ';
    f = false;
    for (int i = 0; i < a.size(); i++) {
      if (i%2 == 1) std::cout << a[i];
    }
  }
  std::cout << '\n';
}
