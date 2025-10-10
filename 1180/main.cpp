#include <iostream>

int main(){
  int n{};
  std::cin >> n;
  int x[n];

  for (int i = 0; i < n; i++) {
    std::cin >> x[i];
  }
  
  int menor = x[0], pos = 0;
  
  for (int i = 0; i < n; i++) {
    if (x[i] < menor) {
      menor = x[i];
      pos = i;
    }
  }
  std::cout << "Menor valor: " << menor << '\n';
  std::cout << "Posicao: " << pos << '\n';
}
