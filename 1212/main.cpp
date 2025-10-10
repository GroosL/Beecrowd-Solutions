#include <bits/stdc++.h>

int main() {
  std::string a,b;

  while (std::cin >> a >> b && (a != "0" && b != "0")) {
    int count{};
    int carry{};
    
    while (a.size() < b.size()) a = "0" + a;
    while (b.size() < a.size()) b = "0" + b;

    for (int i = a.size(); i >= 0; i--) {
      if ((a[i] - '0') + (b[i] - '0') + carry >= 10) {
        count++;
        carry = 1;
      }
      else {
        carry = 0;
      }
    }
    if (!count) {
      std::cout << "No carry operation." << '\n';
    }
    else if (count > 1) {
      std::cout << count << " carry operations." << '\n';
    }
    else {
      std::cout << "1 carry operation." << '\n';
    }
  }
}
