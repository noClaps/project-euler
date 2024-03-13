#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isAbundant(int n) {
  int factorSum = 0;
  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      factorSum += n / i == i ? i : (i + n / i);
    }
  }

  return factorSum - n > n;
}

bool isSumOfAbundants(int n, bool arr[]) {
  for (int i = 0; i <= n / 2; i++) {
    int op1 = i;
    int op2 = n - i;

    if (arr[op1] && arr[op2]) {
      return true;
    }
  }

  return false;
}

int main() {
  bool abundants[28124] = {false};

  for (int i = 12; i <= 28111; i++) {
    abundants[i] = isAbundant(i);
  }

  int notAbundantSum = 0;

  for (int i = 1; i <= 28123; i++) {
    if (!isSumOfAbundants(i, abundants)) {
      notAbundantSum += i;
    }
  }

  printf("%d\n", notAbundantSum);
  return 0;
}
// 4179871
