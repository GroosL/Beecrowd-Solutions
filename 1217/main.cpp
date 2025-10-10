#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  double count{};
  double val{};
  for (int i = 0; i < n; i++) {
    double v;
    std::cin >> v;
    std::cin.ignore();
    std::string s;
    std::getline(std::cin, s);

    int dcount{};
    std::istringstream iss(s);
    std::string item;
    while (iss >> item) {
      dcount++; 
    }
    count+=dcount;
    val+=v;
    std::cout << "day " << i + 1 << ": " << dcount << " kg\n";
  }
  std::cout << std::fixed << std::setprecision(2) << count/n << " kg by day\n" << "R$ " << val/n << " by day\n";
}
