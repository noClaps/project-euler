// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see
// that the 6th prime is 13. What is the 10,001st prime number?

#include <math.h>
#include <stdio.h>

int isPrime(int n) {
  // -1 is false
  // 0 is true
  if (n == 1) {
    return -1;
  } else if (n < 4) {
    return 0;
  } else if (n % 2 == 0) {
    return -1;
  } else if (n < 9) {
    return 0;
  } else if (n % 3 == 0) {
    return -1;
  } else {
    int r = floor(sqrt(n));
    int f = 5;
    while (f <= r) {
      if (n % f == 0) {
        return -1;
      }
      if (n % (f + 2) == 0) {
        return -1;
      }
      f += 6;
    }
    return 0;
  }
}

int main() {
  int limit = 10001;
  int count = 1;
  int candidate = 1;
  while (count != limit) {
    candidate += 2;
    if (isPrime(candidate) == 0) {
      count++;
    }
  }

  printf("%d\n", candidate);

  return 0;
}
// 104743
