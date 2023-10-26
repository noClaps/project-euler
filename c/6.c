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
int sumOfSquares(int n) {
  int sum = 0;

  for (int i = 1; i <= n; i++) {
    sum += pow(i, 2);
  }

  return sum;
}

int squareOfSum(int n) {
  int sum = 0;

  for (int i = 1; i <= n; i++) {
    sum += i;
  }

  return pow(sum, 2);
}

int main() {
  printf("%d\n", squareOfSum(100) - sumOfSquares(100));
  return 0;
}
// 25164150
