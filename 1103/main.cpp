#include <iostream>

int main() {
  int h1 = -1, m1 = -1, h2 = -1, m2 = -1;
  
  while(std::cin >> h1 >> m1 >> h2 >> m2) {
    if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) {
      break;
    }
    int minutos{};

    if (h1 == h2) {
      h2 = 48;
      h1 = 24;
    }
    if (h2 == 0) {
      h2 = 24;
    }
    if (h1 == 0)
      h1 = 24;
    if (h2 < 12) {
      h2 = h2 + 24;
    }
    minutos += (h2 - h1) * 60;
    minutos += m2 - m1;
    std::cout << minutos << '\n';
  }
}
