// 2520 is the smallest number that can be divided by each of the numbers
// from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the
// numbers from 1 to 20?

#include <math.h>
#include <stdio.h>

int main() {
  int primes[] = {2, 3, 5, 7, 11, 13, 17, 19};
  int product = 1;

  int length = 0;
  while (primes[length] < 20) {
    length++;
  }

  for (int i = 0; i < length; i++) {
    product *= pow(primes[i], floor(log(20) / log(primes[i])));
  }
  printf("%d\n", product);
  return 0;
}
// 232792560
