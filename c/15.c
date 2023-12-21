#include <stdio.h>

long countRoutes(int n) {
  long result = 1;

  for (int i = 1; i <= n; i++) {
    result = result * (n + i) / i;
  }

  return result;
}

int main() {
  printf("%ld\n", countRoutes(20));
  // 137846528820

  return 0;
}