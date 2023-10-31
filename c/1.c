// If we list all the natural numbers below 10 that are multiples of 3 or 5, we
// get 3, 5, 6, and 9. The sum of these multiples is 23. Find the sum of all the
// multiples of 3 or 5 below 1000.

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
