#include <stdio.h>

int collatzLen(long n) {
  int chainLen = 0;

  while (n != 1) {
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = 3 * n + 1;
    }

    chainLen += 1;
  }

  return chainLen;
}

int main() {
  int maxLen = 0;
  int maxNum = 0;
  for (long i = 1; i <= 1e6; i++) {
    if (collatzLen(i) > maxLen) {
      maxLen = collatzLen(i);
      maxNum = i;
    }
  }

  printf("%d\n", maxNum);
  return 0;
}
// 837799
