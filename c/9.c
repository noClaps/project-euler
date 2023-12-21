#include <math.h>
#include <stdio.h>

int gcd(int num1, int num2) {
  int maxGcd;
  for (int i = 0; i < num1; i++) {
    if (num1 % i == 0 && num2 % i == 0 && i > maxGcd) {
      maxGcd = i;
    }
  }

  return maxGcd;
}

int main() {
  int k;

  int s = 1000;
  int s2 = s / 2;
  int mlimit = ceil(sqrt(s2)) - 1;

  for (int m = 2; m <= mlimit; m++) {
    if (s2 % m == 0) {
      int sm = s2 / m;
      while (sm % 2 == 0) {
        sm /= 2;
      }
      if (m % 2 == 1) {
        k = m + 2;
      } else {
        k = m + 1;
      }
      while (k < 2 * m && k <= sm) {
        if (sm % k == 0 && gcd(k, m) == 1) {
          int d = s2 / (k * m);
          int n = k - m;
          int a = d * (m * m - n * n);
          int b = 2 * d * m * n;
          int c = d * (m * m + n * n);
          printf("%d\n", a * b * c);
          // 31875000
        }
        k += 2;
      }
    }
  }

  return 0;
}