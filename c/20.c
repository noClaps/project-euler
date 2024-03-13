// Solution from mgeiss on the Project Euler forum
// https://projecteuler.net/thread=20;page=9#427876

#include <stdio.h>
int main() {
  int num[158] = {0};
  num[157] = 1;

  int carry = 0;

  for (int i = 2; i <= 100; i++) {
    for (int j = 157; j >= 0; j--) {
      num[j] = carry + num[j] * i;
      carry = num[j] / 10;
      num[j] %= 10;
    }
  }

  int sum = 0;
  for (int i = 0; i < 158; i++) {
    sum += num[i];
  }

  printf("%d\n", sum);
  return 0;
}
// 648
