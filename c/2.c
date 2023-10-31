// Each new term in the Fibonacci sequence is generated by adding the previous
// two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5,
// 8, 13, 21, 34, 55, 89, ... By considering the terms in the Fibonacci sequence
// whose values do not exceed four million, find the sum of the even-valued
// terms.

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
