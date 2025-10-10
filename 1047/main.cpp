#include <bits/stdc++.h>

int main() {
  int h1, m1, h2, m2;
  std::cin >> h1 >> m1 >> h2 >> m2;

  int comeco = h1 * 60 + m1;
  int fim = h2 * 60 + m2;

  if (fim <= comeco) {
    fim += 24 * 60;
  }

  int tempo = fim - comeco;
  int hF = tempo / 60;
  int mF = tempo % 60;

  std::cout << "O JOGO DUROU " << hF << " HORA(S) E " << mF
            << " MINUTO(S)\n";
}
