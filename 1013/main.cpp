#include <iostream>

int main()
{
    int a, b, c, maiorAB, maiorXC;
    std::cin >> a >> b >> c;

    maiorAB = (a+b+abs(a-b))/2;
    maiorXC = (maiorAB+c+abs(maiorAB-c))/2;

    std::cout << maiorXC << " eh o maior" << std::endl;
}
