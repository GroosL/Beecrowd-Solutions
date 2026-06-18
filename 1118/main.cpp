#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

const int MOD{1000000007};

#define levec(v) for (auto &i : v) std::cin >> i
#define printvec(v, n) for (int i = 0; i < n; i++) { if(i) std::cout << ' '; std::cout << v[i]; };
#define endl '\n'

double lerNota() {
  double x;
  do {
    std::cin >> x;
    if (x < 0 || x > 10) std::cout << "nota invalida\n";
  } while(x < 0 || x > 10);
  return x;
}

int pegarOp() {
  int op{};
  do {
    if (op != 1 && op != 2) std::cout << "novo calculo (1-sim 2-nao)\n";
    std::cin >> op;
  } while(op != 1 && op != 2);
  return op;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  
  int op;
  do {
    double nota = lerNota();
    double nota2 = lerNota();
    double media = (nota + nota2) / 2;
    // printf("media = %.2lf\n", media);
    std::cout << std::fixed << std::setprecision(2) << "media = " << media << '\n';
    op = pegarOp();
  }while (op == 1);
}
