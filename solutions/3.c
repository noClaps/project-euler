#include <math.h>
#include <stdio.h>

int main() {
  long n = 600851475143;

  for (int i = 2; i <= round(sqrt(n)); i++) {
    while (n % i == 0) {
      n = n / i;
    }
  }

  printf("%ld\n", n);

  return 0;
}
// 6857
