#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;
    if (x == 0) {
      std::cout << "NULL\n";
      continue; 
    }
    if (x%2 == 0) {
      std::cout << "EVEN ";
    }
    else {
      std::cout << "ODD ";
    }
    if (x > 0) {
      std::cout << "POSITIVE\n";
    }
    else {
      std::cout << "NEGATIVE\n";
    }
  }
}
