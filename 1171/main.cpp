#include <iostream>
#include <map>

int main() {
    int n;
    std::cin >> n;

    std::map<int, int> contador;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        contador[x]++;
    }

    for (const auto& par : contador) {
        std::cout << par.first << " aparece " << par.second << " vez(es)\n";
    }

    return 0;
}
