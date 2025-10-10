#include <iostream>
#include <string>

int main() {
  std::string est;
  std::cin >> est;

  if (est == "para" || est == "roraima" || est == "acre" || est == "amapa" || est == "amazonas" || est == "rondonia" || est == "tocantins") {
    std::cout << "Regiao Norte\n";
  }
  else {
    std::cout << "Outra regiao\n";
  }
}
