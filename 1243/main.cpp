#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  
  std::string s;
  while (std::getline(std::cin, s)) {
    std::istringstream iss(s);
    
    std::string str;
    int soma{};
    int count{};
    while (iss>>str) {
      bool v = true;
      for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] == '.' || (str[i] >= '0' && str[i] <= '9')) v = false; 
      }
      if (str[str.size() - 1] >= '0' && str[str.size() - 1] <= '9') v = false; 
      if (str == ".") v = false;
      if (v) {
        if (str[str.size() - 1] == '.') soma+= str.size() - 1;
        else soma+=str.size();
        count++;
      }
    }
    
    int media{1};
    if (count != 0) media = soma / count;
    if (media <= 3) std::cout << "250\n";
    else if (media <= 5) std::cout << "500\n";
    else std::cout << "1000\n";
  }
}
