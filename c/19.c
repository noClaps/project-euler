// You are given the following information, but you may prefer to do some
// research for yourself.
// - 1 Jan 1900 was a Monday.
// - Thirty days has September,
//   April, June and November.
//   All the rest have thirty-one,
//   Saving February alone,
//   Which has twenty-eight, rain or shine.
//   And on leap years, twenty-nine.
// - A leap year occurs on any year evenly divisible by 4, but not on a century
//   unless it is divisible by 400.
// How many Sundays fell on the first of the month during the twentieth century
// (1 Jan 1901 to 31 Dec 2000)?

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
  // 171

  return 0;
}