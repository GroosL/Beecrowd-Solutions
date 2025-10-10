#include <bits/stdc++.h>

int main() {
  int a,b;
  while (std::cin >> a >> b && (a || b)) {
    if (a > b) std::swap(a, b);
    std::unordered_map<int, long long> nums = {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}, {6, 0}, {7, 0}, {8, 0}, {9, 0}}; 
    for (long long i = a; i <= b; i++) {
      std::string num = std::to_string(i);
      for (char c  : num) {
        nums[c - '0']++;
      }
    }
    for (int i = 0; i <= 9; i++) {
      if (i) std::cout << ' ';
      std::cout << nums[i];
    }
    std::cout << '\n';
  }
}
