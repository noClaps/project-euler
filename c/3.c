// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143?

#include <math.h>
#include <stdio.h>

int main() {
  // Need to use long as numbers can get really big
  long lastFactor;
  long n = 600851475143;

  if (n % 2 == 0) {
    lastFactor = 2;
    n /= 2;
    while (n % 2 == 0) {
      n /= 2;
    }
  } else {
    lastFactor = 1;
  }

  int factor = 3;
  double maxFactor = sqrt(n);

  while (n > 1 && factor <= maxFactor) {
    if (n % factor == 0) {
      n /= factor;
      lastFactor = factor;
      while (n % factor == 0) {
        n /= factor;
      }
      maxFactor = sqrt(n);
    }
    factor += 2;
  }

  if (n == 1) {
    printf("%ld\n", lastFactor);
  } else {
    printf("%ld\n", n);
  }
}
// 6857
