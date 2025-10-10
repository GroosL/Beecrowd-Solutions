#include <bits/stdc++.h>

int main() {
  double x;
  for (int i = 0; i < 100; i++) {
    std::cin >> x;
    std::cout << std::fixed << std::setprecision(1);
    if (x <= 10) {
      std::cout << "A[" << i << "] = " << x << '\n'; 
    }
  }
}
