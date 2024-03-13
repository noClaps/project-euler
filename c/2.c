#include <stdio.h>

int main() {
  int sum = 0;
  int a = 1;
  int b = 1;

  while (a < 4e6) {
    sum += a % 2 == 0 ? a : 0;
    int temp = a;
    a = b;
    b += temp;
  }

  printf("%d\n", sum);
  return 0;
}
// 4613732
