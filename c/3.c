// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143?

#include <stdio.h>

int main() {
  long divisor = 3;
  long number = 600851475143;

  while (divisor <= number) {
    if (number % divisor == 0) {
      number /= divisor;
    } else {
      divisor += 2;
    }
  }
  printf("%ld\n", divisor);
  return 0;
}
// 6857
