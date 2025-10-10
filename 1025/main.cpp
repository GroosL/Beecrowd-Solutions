#include <bits/stdc++.h>

int search(const std::vector<int>& nums, int target) {
  int low = 0, high = nums.size() - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (nums[mid] == target) {
      while (mid > 0 && nums[mid - 1] == target) mid--;
      return mid + 1;
    }
    else if (nums[mid] < target) {
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }
  }
  return -1;
}

int main() {
  int n, q, caso{};
  while (std::cin >> n >> q, n || q) {
    std::vector<int> marbles(n);
    
    for (auto &x : marbles) {
      std::cin >> x;
    }

    std::sort(marbles.begin(), marbles.end());

    std::cout << "CASE# " << ++caso << ":\n";
    for (int i = 0; i < q; i++) {
      int query;
      std::cin >> query;
      int pos = search(marbles, query);
      if (pos != -1)
        std::cout << query << " found at " << pos << '\n';
      else
        std::cout << query << " not found\n";
    }
  }
}
