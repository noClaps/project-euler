#include <stdio.h>

int main() {
  int sum = 0;
  int a = 1;
  int b = 1;
  int c = a + b;

  while (c < 4e6) {
    sum += c;
    a = b + c;
    b = c + a;
    c = a + b;
  }

  printf("%d\n", sum);
  return 0;
}
// 4613732
