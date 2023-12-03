// If the numbers 1 to 5 are written out in words: one, two, three, four, five,
// then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
//
// If all the numbers from 1 to 1000 (one thousand) inclusive were written out
// in words, how many letters would be used?
//
// NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and
// forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20
// letters. The use of "and" when writing out numbers is in compliance with
// British usage.

#include <stdio.h>
int oneToNinetyNine(int oneToNine[], int elevenToNineteen[], int tens[]) {
  int oneToNinetyNine = 0;
  // 1 ... 9
  for (int num = 0; num <= 8; num++) {
    oneToNinetyNine += oneToNine[num];
  }
  // 10
  oneToNinetyNine += 3;
  // 11 ... 19
  for (int num = 0; num <= 8; num++) {
    oneToNinetyNine += elevenToNineteen[num];
  }

  // 20 ... 99
  int twentyToNinetyNine = 0;
  for (int tenNum = 0; tenNum <= 7; tenNum++) {
    twentyToNinetyNine += tens[tenNum];
    for (int num = 0; num <= 8; num++) {
      twentyToNinetyNine += tens[tenNum] + oneToNine[num];
    }
  }

  oneToNinetyNine += twentyToNinetyNine;

  return oneToNinetyNine;
}

int oneHundredTo999(int oneToNine[], int elevenToNineteen[], int tens[]) {
  int oneHundredTo999 = 0;
  for (int one = 0; one <= 8; one++) {
    // onehundred, twohundred, ...
    oneHundredTo999 += oneToNine[one] + 7;

    // onehundredand + (one+two+three+four+...+ninetynine)
    // twohundredand + (one+two+three+four+...+ninetynine)
    // threehundredand + (one+two+three+four+...+ninetynine)
    // ...
    oneHundredTo999 += (oneToNine[one] + 7 + 3) * 99 +
                       oneToNinetyNine(oneToNine, elevenToNineteen, tens);
  }

  return oneHundredTo999;
}

int main() {
  int oneToNine[] = {3, 3, 5, 4, 4, 3, 5, 5, 4};
  int elevenToNineteen[] = {6, 6, 8, 8, 7, 7, 9, 8, 8};
  int tens[] = {6, 6, 5, 5, 5, 7, 6, 6};

  int strlen = 0;

  strlen += oneToNinetyNine(oneToNine, elevenToNineteen, tens);
  strlen += oneHundredTo999(oneToNine, elevenToNineteen, tens);
  strlen += 11; // onethousand

  printf("%d\n", strlen);
  // 21124

  return 0;
}
