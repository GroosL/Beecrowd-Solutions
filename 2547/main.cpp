#include <bits/stdc++.h>

int main() {
  int n, an, ax;
  while (std::cin >> n >> an >> ax) {
    int count{};
    for (int i = 0; i < n; i++) {
      int input;
      std::cin >> input;
      if (input >= an && input <= ax) {
        count++; 
      }
    }
    std::cout << count << '\n';
  }
}
