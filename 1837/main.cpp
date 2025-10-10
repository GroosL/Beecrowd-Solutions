#include <iostream>

int main() {
  int a, b;

  std::cin >> a >> b;

  int q, r;

  q = a / b;

  r = a % b;

  if (r < 0 && b > 0) {
    r += b;
    q--;
  } else if (r < 0 && b < 0) {
    r -= b;
    q++;
  }

  std::cout << q << ' ' << r << std::endl;
}
