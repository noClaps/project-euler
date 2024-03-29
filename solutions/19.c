#include <stdio.h>
int main() {
  int numOfSundays = 0;
  int months[] = {6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  int monthsLeap[] = {5, 1, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

  // 1901-1999
  for (int year = 1901; year < 2000; year++) {
    int yearCode = (year - 1900) + ((year - 1900) / 4) + 1;

    for (int month = 0; month <= 11; month++) {
      if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        int monthCode = monthsLeap[month];
        if ((yearCode + monthCode + 1) % 7 == 0) {
          numOfSundays++;
        }
      } else {
        int monthCode = months[month];
        if ((yearCode + monthCode + 1) % 7 == 0) {
          numOfSundays++;
        }
      }
    }
  }

  // 2000
  int yearCode = 0;
  for (int month = 0; month <= 11; month++) {
    // 2000 was a leap year
    int monthCode = monthsLeap[month];
    if ((yearCode + monthCode + 1) % 7 == 0) {
      numOfSundays++;
    }
  }

  printf("%d\n", numOfSundays);
  return 0;
}
// 171
