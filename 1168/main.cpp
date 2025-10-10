#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;

  int leds_por_digito[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

  while (n--) {
    std::string numero;
    std::cin >> numero;

    int total_leds = 0;
    for (char digito : numero) {
      total_leds += leds_por_digito[digito - '0'];
    }

    std::cout << total_leds << " leds" << std::endl;
  }

  return 0;
}
