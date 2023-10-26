// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see
// that the 6th prime is 13. What is the 10,001st prime number?

#include <math.h>
#include <stdio.h>

int primeChecker(int primes[], int sizeOfArray, int valueToCheck) {
  for (int i = 0; i < sizeOfArray && primes[i] <= sqrt(valueToCheck); i++) {
    if (valueToCheck % primes[i] == 0) {
      // False - is not a prime
      return -1;
    }
  }

  // True - is a prime
  return 0;
}

int main() {
  int primes[10001] = {2, 3, 5, 7, 11, 13};
  int n = 17;
  int index = 6;

  while (index <= 10000) {
    if (primeChecker(primes, index, n) == 0) {
      primes[index] = n;
      index++;
    }
    n += 2;
  }

  printf("%d\n", primes[10000]);

  return 0;
}
// 104743
