#include <iostream>

int main(){
  int x, y, m;
  while (std::cin >> x >> y >> m) {
    for (int i = 0; i < m; i++) {
      int a,l;
      std::cin >> a >> l;
      if (a * l <= x * y) {
        std::cout << "Sim\n";
      }
      else {
        std::cout << "Nao\n";
      }
    }
  }
}
