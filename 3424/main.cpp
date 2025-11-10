#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;
  std::string s;
  std::cin >> s;

  int count{};
  int at{};
  for (int i = 0; i < n; i++) {
    if (s[i] == 'a') at++;
    else if (at >= 2){
      count+=at;
      at = 0;
    }
    else at = 0;
    if (i == n-1 && at >= 2) count+=at;
  }
  std::cout << count << '\n';
}
