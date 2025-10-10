#include <iostream>

int main() {
  long x;
  int counter{};
  while (std::cin >> x) {
    if (counter > 0) {
      std::cout << '\n';
    }
    if (x % 4 == 0) {
      std::cout << "This is leap year.\n";
    }
    if (x % 15 == 0) {
      std::cout << "This is huluculu festival year.\n";
    }
    if (x % 4 == 0 && x % 55 == 0) {
      std::cout << "This is bulukulu festival year.\n";
    } 
    if (x % 4 != 0 && x % 15 != 0) {
      std::cout << "This is an ordinary year.\n";
    }
    counter++;
  }
}
