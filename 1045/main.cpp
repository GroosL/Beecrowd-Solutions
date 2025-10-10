#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  double a,b,c;
  std::vector<double> val;

  for (int i = 0; i < 3; i++) {
    double input;
    std::cin >> input;
    val.push_back(input);
  }

  std::sort(val.begin(), val.end(), std::greater<>());

  a = val[0];
  b = val[1];
  c = val[2];

  if (a >= (b + c)) {
    std::cout << "NAO FORMA TRIANGULO\n";
    return 0;
  }
  if ((a * a) == ((b * b) + (c * c))) {
    std::cout << "TRIANGULO RETANGULO\n" ;
  }
  if ((a * a) > ((b *b) + (c * c))) {
    std::cout << "TRIANGULO OBTUSANGULO\n"; 
  }
  if ((a * a) < ((b * b) + (c * c))) {
    std::cout << "TRIANGULO ACUTANGULO\n"; 
  }
  if (a == b && b == c) {
    std::cout << "TRIANGULO EQUILATERO\n"; 
  }
  if ((a == b && b != c) || (b == c && c != a))  {
    std::cout << "TRIANGULO ISOSCELES\n"; 
  }
}
