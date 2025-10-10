#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long prefixo_comum(const string &a, const string &b) {
  long long count = 0;
  long long tamanho = min(a.size(), b.size());
  for (long long i = 0; i < tamanho; ++i) {
    if (a[i] == b[i])
      count++;
    else
      break;
  }
  return count;
}

int main() {
  long long n;
  while (cin >> n) {
    vector<string> numeros(n);
    for (long long i = 0; i < n; i++) {
      cin >> numeros[i];
    }

    long long max_economia = 0;
    for (long long i = 1; i < n; i++) {
      long long economia = prefixo_comum(numeros[i - 1], numeros[i]);
      if (economia > max_economia) {
        max_economia = economia;
      }
    }

    cout << max_economia << endl;
  }

  return 0;
}
