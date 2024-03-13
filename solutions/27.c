#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }

  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int maxCount = 0;
  int maxAB = 0;

  for (int a = -999; a <= 999; a++) {
    for (int b = -1000; b <= 1000; b++) {
      int primeCounter = 0;

      for (int n = 0; isPrime(n * n + a * n + b); n++) {
        primeCounter++;
      }

      if (primeCounter >= maxCount) {
        maxCount = primeCounter;
        maxAB = a * b;
      }
    }
  }

  printf("%d\n", maxAB);
  return 0;
}
// -59231
