#include <math.h>
#include <stdio.h>

int factorLength(int n) {
  int factorLength = 0;
  for (int i = 0; i <= sqrt(n); i++) {
    if (n % i == 0) {
      factorLength += n / i == i ? 1 : 2;
    }
  }

  return factorLength;
}

int main() {
  int num = 1;
  int triangleNum = 0;

  while (factorLength(triangleNum) < 500) {
    triangleNum += num;
    num++;
  }

  printf("%d\n", triangleNum);
  return 0;
}
// 76576500
