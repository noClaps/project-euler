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

const oneToNine = [3, 3, 5, 4, 4, 3, 5, 5, 4];
const elevenToNineteen = [6, 6, 8, 8, 7, 7, 9, 8, 8];
const tens = [6, 6, 5, 5, 5, 7, 6, 6];

let strlen = 0;

function oneToNinetyNine() {
    let oneToNinetyNine = 0;
    // 1 ... 9
    for (const num of oneToNine) {
        oneToNinetyNine += num;
    }
    // 10
    oneToNinetyNine += 3;
    // 11 ... 19
    for (const num of elevenToNineteen) {
        oneToNinetyNine += num;
    }

    // 20 ... 99
    let twentyToNinetyNine = 0;
    for (const tenNum of tens) {
        twentyToNinetyNine += tenNum;
        for (const num of oneToNine) {
            twentyToNinetyNine += tenNum + num;
        }
    }

    oneToNinetyNine += twentyToNinetyNine;

    return oneToNinetyNine;
}

function oneHundredTo999() {
    let oneHundredTo999 = 0;
    for (const one of oneToNine) {
        // onehundred, twohundred, ...
        oneHundredTo999 += one + 7;

        // onehundredand + (one+two+three+four+...+ninetynine)
        // twohundredand + (one+two+three+four+...+ninetynine)
        // threehundredand + (one+two+three+four+...+ninetynine)
        // ...
        oneHundredTo999 += (one + 7 + 3) * 99 + oneToNinetyNine();
    }

    return oneHundredTo999;
}

strlen += oneToNinetyNine();
strlen += oneHundredTo999();
strlen += 11; // onethousand

console.log(strlen);
// 21124

export { };
