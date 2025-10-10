#include <iostream>

int main(){
  unsigned long long int n{};
  while (std::cin >> n) {
    int counter{};
    for (int i = 1; i < n; i++) {
      if ((i + i) == n) {
        counter++;
      }
      std::cout << counter + 1;
    }
  }
}
