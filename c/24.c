// Solution from mgeiss on the Project Euler forum
// https://projecteuler.net/thread=24;page=9#427897

#include <stdio.h>

int factorial(int n) {
  int fact = 1;

  for (int i = 2; i <= n; i++) {
    fact *= i;
  }

  return fact;
}

int main() {
  int d, j, t, p = 999999;
  int taken[10] = {0};

  for (int i = 9; i >= 0; i--) {
    d = p / factorial(i);
    p %= factorial(i);
    t = 0;
    j = 0;

    while (t != d || taken[j]) {
      t += !taken[j];
      j++;
    }

    taken[j] = 1;
    printf("%d", j);
  }

  printf("\n");
  return 0;
}
// 2783915460
