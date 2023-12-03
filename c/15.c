// Starting in the top left corner of a 2 x 2 grid, and only being able to move
// to the right and down, there are exactly 6 routes to the bottom right corner.
//
// How many such routes are there through a 20 x 20 grid?

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