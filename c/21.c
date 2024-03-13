#include <math.h>
#include <stdio.h>

int d(int n) {
  int divisorSum = 1;
  for (int i = 2; i < sqrt(n); i++) {
    if (n % i == 0) {
      divisorSum += i;
      divisorSum += n / i;
    }
  }

  return divisorSum;
}

int main() {
  int amicableSum = 0;

  for (int a = 1; a <= 10000; a++) {
    int n1 = d(a);
    int n2 = d(n1);

    if (n2 == a && n1 != n2) {
      amicableSum += a;
    }
  }

  printf("%d\n", amicableSum);
  return 0;
}
// 31626
