#include <iostream>

int main() {
  int h, z, l;

  std::cin >> h >> z >> l;

  if ((h > z || h > l) && (h < l || h < z)) {
    std::cout << "huguinho\n"; 
  }
  else if ((z > h || z > l) && (z < l || z < h)) {
    std::cout << "zezinho\n"; 
  }
  else if ((l > z || l > h) && (l < h || l < z)) {
    std::cout << "luisinho\n";
  }
}
