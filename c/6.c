#include <math.h>
#include <stdio.h>

int main() {
  int limit = 100;
  int sum = limit * (limit + 1) / 2;
  int sumSq = (2 * limit + 1) * (limit + 1) * limit / 6;
  printf("%d\n", sum * sum - sumSq);
  return 0;
}
// 25164150
