#include <stdio.h>

int sumDivisible(int n, int target) {
  int p = target / n;
  return n * (p * (p + 1)) / 2;
}

int main() {
  printf("%d\n",
         sumDivisible(3, 999) + sumDivisible(5, 999) - sumDivisible(15, 999));
  return 0;
}
// 233168
