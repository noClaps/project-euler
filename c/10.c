#include <math.h>
#include <stdio.h>

int main() {
  int limit = 2000000;
  int sievebound = (limit - 1) / 2;
  int sieve[limit];
  int crosslimit = (floor(sqrt(limit)) - 1) / 2;
  for (int i = 1; i <= crosslimit; i++) {
    if (sieve[i] != 1) {
      for (int j = 2 * i * (i + 1); j <= sievebound; j += 2 * i + 1) {
        sieve[j] = 1;
      }
    }
  }

  long sum = 2;
  for (int i = 1; i <= sievebound; i++) {
    if (sieve[i] != 1) {
      sum += 2 * i + 1;
    }
  }

  printf("%ld\n", sum);
  // 142913828922

  return 0;
}
