#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

const int MOD{1000000007};

#define levec(v)                                                               \
  for (auto &i : v)                                                            \
  std::cin >> i
#define printvec(v, n)                                                         \
  for (int i = 0; i < n; i++) {                                                \
    if (i)                                                                     \
      std::cout << ' ';                                                        \
    std::cout << v[i];                                                         \
  };
#define endl '\n'

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::string a, b, c;
  std::cin >> a >> b >> c;

  if (a == "vertebrado") {
    if (b == "ave") {
      if (c == "carnivoro")
        std::cout << "aguia\n";
      else
        std::cout << "pomba\n";
    } else {
      if (c == "onivoro")
        std::cout << "homem\n";
      else
        std::cout << "vaca\n";
    }
  } else {
    if (b == "inseto") {
      if (c == "hematofago")
        std::cout << "pulga\n";
      else
        std::cout << "lagarta\n";
    } else {
      if (c == "hematofago")
        std::cout << "sanguessuga\n";
      else
        std::cout << "minhoca\n";
    }
  }
}
