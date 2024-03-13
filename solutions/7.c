#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int counter = 0;
  int prime = 0;
  int n = 0;

  while (counter != 10001) {
    if (isPrime(n)) {
      prime = n;
      counter += 1;
    }
    n += 1;
  }

  printf("%d\n", prime);
  return 0;
}
// 104743
