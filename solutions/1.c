#include <stdio.h>

int sumDivisible(int n, int target) {
  int p = target / n;
  return n * (p * (p + 1)) / 2;
}

int main() {
  int sum = 0;
  for (int i = 1; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  printf("%d\n", sum);
  return 0;
}
// 233168
