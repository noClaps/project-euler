// Solution from gauravpalariya on the Project Euler forum
// https://projecteuler.net/thread=25;page=8#426392

#include <stdio.h>

void calculate(int f1[], int f2[], int f3[]) {
  int sum, carry = 0;

  for (int i = 0; i < 1000; i++) {
    sum = f1[i] + f2[i] + carry;
    f3[i] = sum % 10;
    carry = sum / 10;
  }
}

int main() {
  int f1[1000] = {1};
  int f2[1000] = {1};
  int f3[1000] = {2};
  int count = 2;

  while (f3[999] == 0) {
    count++;
    for (int i = 0; i < 1000; i++) {
      f1[i] = f2[i];
      f2[i] = f3[i];
    }
    calculate(f1, f2, f3);
  }

  printf("%d\n", count + 1);
  return 0;
}
// 4782
