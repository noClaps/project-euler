#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isPrime(long n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  long sum = 0;

  for (long i = 2; i <= 2e6; i++) {
    if (isPrime(i)) {
      sum += i;
    }
  }

  printf("%ld\n", sum);
  return 0;
}
// 142913828922
