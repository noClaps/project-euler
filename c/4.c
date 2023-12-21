#include <stdio.h>

int reversed(int n) {
  int reversed = 0;
  while (n > 0) {
    reversed = 10 * reversed + n % 10;
    n /= 10;
  }
  return reversed;
}

int isPalindrome(int n) { return n == reversed(n); }

int main() {
  int largestPalindrome = 0;
  int a = 999;
  while (a >= 100) {
    int b = 999;
    while (b >= a) {
      if (a * b <= largestPalindrome) {
        break;
      }

      if (isPalindrome(a * b)) {
        largestPalindrome = a * b;
      }
      b--;
    }
    a--;
  }
  printf("%d\n", largestPalindrome);
  return 0;
}
// 906609
