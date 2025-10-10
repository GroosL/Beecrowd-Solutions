#include <bitset>
#include <iostream>
#include <ostream>
#include <string>

int main() {
  unsigned long a, b;
  while (std::cin >> a && std::cin >> b) {
    std::string abin = std::bitset<32>(a).to_string();
    std::string bbin = std::bitset<32>(b).to_string();
    char res[32];
    
    for (int i = 0; i < abin.size(); i++) {
      if (abin[i] == '1' && bbin[i] == '1') {
        res[i] = '0';
      }
      if ((abin[i] == '0' && bbin[i] == '1') || (abin[i] == '1' && bbin[i] == '0')) {
        res[i] = '1'; 
      }
      if ((abin[i] == '0' && bbin[i] == '0')) {
        res[i] = '0';
      }
    }
    unsigned long decimal = std::bitset<32>(res).to_ulong();
    std::cout<< decimal << std::endl;

  }
}
