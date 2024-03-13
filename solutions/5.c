#include <stdbool.h>
#include <stdio.h>

bool divisibility(int n) {
  for (int i = 2; i <= 20; i++) {
    if (n % i != 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int num = 2520;

  while (!divisibility(num)) {
    num += 1;
  }

  printf("%d\n", num);

  return 0;
}
// 232792560
