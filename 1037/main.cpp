#include <bits/stdc++.h>

int main() {
    float valor;
    std::cin >> valor;

    if (valor >= 0 && valor <= 25) {
      std::cout << "Intervalo [0,25]\n";
    } else if (valor > 25 && valor <= 50) {
      std::cout << "Intervalo (25,50]\n";
    } else if (valor > 50 && valor <= 75) {
      std::cout << "Intervalo (50,75]\n";
    } else if (valor > 75 && valor <= 100) {
      std::cout << "Intervalo (75,100]\n";
    } else {
      std::cout << "Fora de intervalo\n";
    }
}
