#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  while (std::cin >> n && n) {
    std::queue<int> q;
    for (int i = 1; i <= n; i++) {
      q.push(i);
    }
    std::cout << "Discarded cards:";
    bool f = true;
    while (q.size() > 1) {
      if (f) {
        std::cout << ' ' << q.front();
        q.pop();
        q.push(q.front());
        q.pop();
        f = false;
        continue;
      }
      if (!f)
        std::cout << ", ";
      f = false;
      std::cout << q.front();
      q.pop();
      q.push(q.front());
      q.pop();
    }
    std::cout << "\nRemaining card: " << q.front() << '\n';
  }
}
