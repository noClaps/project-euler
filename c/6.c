// The sum of the squares of the first ten natural numbers is,
// 1^2 + 2^2 + ... + 10^2 = 385.
// The square of the sum of the first ten natural numbers is,
// (1 + 2 + ... + 10)^2 = 55^2 = 3025.
// Hence the difference between the sum of the squares of the first ten natural
// numbers and the square of the sum is 3025 - 385 = 2640.
// Find the difference between the sum of the squares of the first one hundred
// natural numbers and the square of the sum.

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
