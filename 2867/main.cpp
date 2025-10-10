#include <iostream>
#include <cmath>
#include <string>

int countDigits(unsigned long long int n) {
    if (n == 0) return 1;
    return floor(log10(n) + 1);
}

int main() {
  int c, count{};
  std::cin >> c;

  for (int i = 0; i < c; i++) {
    count = 0;
    int n, m;
    unsigned long long int res{};
    std::cin >> n >> m;
    
    res = n;
    for (int i = 1; i < m; i++) {
      res *= n;
    }
    
    std::string num = std::to_string(res);

    for (char a : num) {
     count++;
    }
    std::cout << count;
  }
}
