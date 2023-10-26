// A palindromic number reads the same both ways. The largest palindrome made
// from the product of two 2-digit numbers is 9009 = 91 x 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

let currentMax = 0;
for (let i = 999; i >= 100; i--) {
    for (let j = i; j >= 100; j--) {
        const numStr = (i * j).toString();
        if (numStr === numStr.split("").reverse().join("") && i * j > currentMax) {
            currentMax = i * j;
        }
    }
}

console.log(currentMax);
// 906609
