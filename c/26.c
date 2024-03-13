// Solution from mgeiss on the Project Euler forum
// https://projecteuler.net/thread=26;page=9#427898

#include <stdio.h>

int main() {
  int maxd, max = 0;

  for (int d = 3; d < 1000; d += 2) {
    if (d % 5 == 0) {
      continue;
    }

    int a = 10 % d;
    int l = 1;

    while (a > 1) {
      l++;
      a = (a * 10) % d;
    }

    if (l > max) {
      max = l;
      maxd = d;
    }
  }

  printf("%d\n", maxd);
  return 0;
}
// 983
