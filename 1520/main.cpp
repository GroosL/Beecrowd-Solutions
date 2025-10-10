#include <bits/stdc++.h>

int main() {
  int n{};
  while (std::cin >> n) {
    std::vector<int> arr;
    for (int i = 0; i < n; i++) {
      int x, y;
      std::cin >> x >> y;
      for (int j = x; j <= y; j++) {
        arr.push_back(j);
      }
    }
    std::sort(arr.begin(), arr.end());
    int num;
    std::cin >> num;
    std::vector<int> res;
    int first{-1}, last{-1};
    for (int j = 0; j < arr.size(); j++) {
      if (arr[j] == num) {
        if (first == -1) {
          first = j;
        }
        last = j;
      }
    }
    if (first != -1) {
      std::cout << num << " found from " << first << " to " << last << '\n';
    } else {
      std::cout << num << " not found\n";
    }
  }
}
