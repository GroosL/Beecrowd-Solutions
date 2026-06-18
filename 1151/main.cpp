#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

const int MOD{1000000007};

#define levec(v) for (auto &i : v) std::cin >> i
#define printvec(v, n) for (int i = 0; i < n; i++) { if(i) std::cout << ' '; std::cout << v[i]; };
#define endl '\n'

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  
  const std::vector<long long> fib = {
    0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,
    2584,4181,6765,10946,17711,28657,46368,75025,121393,
    196418,317811,514229,832040,1346269,2178309,3524578,
    5702887,9227465,14930352,24157817,39088169,63245986,
    102334155,165580141,267914296,433494437,701408733,
    1134903170
  };
  int n;
  std::cin >> n;
  printvec(fib, n);
  std::cout << '\n';
}
