#include <stdio.h>

int main() {
  int cA, cB, nA, nB;
  double pA, pB;
  scanf("%d %d %lf %d %d %lf", &cA, &nA, &pA, &cB, &nB, &pB);
  printf("VALOR A PAGAR: R$ %.2lf\n", nA * pA + nB * pB);
}
