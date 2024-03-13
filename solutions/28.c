#include <stdio.h>

int main() {
  int sum = 1;
  int counter = 1;
  int x = 1000;

  for (int i = 1; i <= x / 2; i++) {
    for (int j = 1; j <= 4; j++) {
      counter += 2 * i;
      sum += counter;
    }
  }

  printf("%d\n", sum);
  return 0;
}
// 669171001
