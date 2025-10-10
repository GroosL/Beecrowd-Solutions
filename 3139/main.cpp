#include <iostream>
#include <vector>

int main() {
  long long int n, m, counter{};

  std::vector<int> d(30);

  std::cin >> n >> m;

  for (int i = 0; i < 30; i++) {
    long long int input;
    std::cin >> input;
    if (n <= m) {
      n += input;
      counter++;
    }
  }

  std::cout << counter << std::endl;
}
