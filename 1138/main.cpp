#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

const int MOD{1000000007};

#define levec(v) for (auto &i : v) std::cin >> i
#define printvec(v, n) for (int i = 0; i < n; i++) { if(i) std::cout << ' '; std::cout << v[i]; };
#define endl '\n'

#define MAX 100000000

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a,b;
  std::vector<ll> memo(MAX,0);
  while (std::cin >> a >> b && a && b) {
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
