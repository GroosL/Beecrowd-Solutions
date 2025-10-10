#include <bits/stdc++.h>

int main() {
  std::vector<int> x(10, 1);
  
  for (int i = 0; i < 10; i++) {
    int a;
    std::cin >> a;
    if (a > 0) {
      x[i] = a;
    }
    std::cout << "X[" << i << "] = " << x[i] << '\n'; 
  }
}
