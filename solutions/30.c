#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#define POWER 5

int digitPowerSum(long n) {
  long sum = 0;
  while (true) {
    sum += pow(n % 10, POWER);
    n /= 10;

    if (n == 0) {
      break;
    }
  }

  return sum;
}

int main() {
  long total = 0;

  for (long a = 2; a <= POWER * pow(POWER, 9); a++) {
    if (digitPowerSum(a) == a) {
      total += a;
    }
  }

  printf("%ld\n", total);
  return 0;
}
// 443839
