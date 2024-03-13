#include <stdio.h>

int sumOfSquares() {
  int sum = 0;
  for (int i = 0; i <= 100; i++) {
    sum += i * i;
  }

  return sum;
}

int squareOfSum() {
  int sum = 0;
  for (int i = 0; i <= 100; i++) {
    sum += i;
  }

  return sum * sum;
}

int main() {
  printf("%d\n", squareOfSum() - sumOfSquares());
  return 0;
}
// 25164150
