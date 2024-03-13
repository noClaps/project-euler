// Solution from mgeiss on the Project Euler forum
// https://projecteuler.net/thread=16;page=9#427875

#include <stdio.h>

int main() {
  int num[302] = {0};
  num[301] = 1;

  int carry = 0;
  for (int i = 0; i < 1000; i++) {
    for (int j = 301; j >= 0; j--) {
      num[j] = 2 * num[j] + carry;
      carry = num[j] / 10;
      num[j] %= 10;
    }
  }

  int sum = 0;
  for (int i = 0; i < 302; i++) {
    sum += num[i];
  }

  printf("%d\n", sum);
  return 0;
}
// 1366
