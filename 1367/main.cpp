#include <bits/stdc++.h>

int main() {
  int n;
  while (std::cin >> n && n) {
    int soma{}, corr{};
    std::vector<int> prob(400, 0);
    std::vector<bool>cer(400, false);
    for (int i = 0; i < n; i++) {
      char c;
      int t;
      std::string acc;
      std::cin >> c >> t;
      std::cin.ignore();
      std::cin >> acc;
      if (acc == "incorrect") {
        prob[c]+=20;
      }
      else if (!cer[c]){
        prob[c]+=t;
        corr++;
        soma+=prob[c];
        cer[c] = true;
      }
    }
    std::cout << corr << ' ' << soma << '\n';
  }
}
