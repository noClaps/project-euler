#include <stdio.h>

int main() {
  int ans = 0;

  for (int a = 1; a <= 1000; a++) {
    for (int b = 1; b <= 1000; b++) {
      for (int c = 1; c <= 1000; c++) {
        if (a * a + b * b == c * c && a + b + c == 1000) {
          ans = a * b * c;
          break;
        }
      }
    }
  }

  printf("%d\n", ans);
  return 0;
}
// 31875000%
