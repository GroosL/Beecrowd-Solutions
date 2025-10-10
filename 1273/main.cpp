#include <algorithm>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

static bool str_compare(std::string a, std::string b) {
  return (a.size() < b.size());
}

int main() {
  int n = 1;

  while (std::cin >> n && n != 0) {
    std::vector<std::string> v(n);

    for (int i = 0; i < n; i++) {
      std::string input;
      std::cin >> input;
      v.push_back(input);
    }
    auto result{std::max_element(v.begin(), v.end(), str_compare)};
    auto elem{std::distance(v.begin(), result)};
    

    for (std::string str : v) {
      std::cout << std::setw(v[elem].size());
      // std::cout << std::right;
      std::cout << str; 
    }
  }
}
