// 2520 is the smallest number that can be divided by each of the numbers
// from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the
// numbers from 1 to 20?

#include <math.h>
#include <stdio.h>

int main() {
  int p[] = {2, 3, 5, 7, 11, 13, 17, 19};
  int a[8];
  int k = 20;
  int N = 1;
  int i = 0;
  int check = 1;
  int limit = sqrt(k);

  while (p[i] <= k) {
    a[i] = 1;
    if (check == 1) {
      if (p[i] <= limit) {
        a[i] = floor(log(k) / log(p[i]));
      } else {
        check = 0;
      }
    }
    N *= pow(p[i], a[i]);
    i++;
  }
  printf("%d\n", N);
  return 0;
}
// 232792560
