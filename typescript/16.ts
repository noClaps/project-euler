// 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
// What is the sum of the digits of the number 2^1000? 

function sum(arr: number[]) {
    let sum = 0;
    for (const val of arr) {
        sum += val;
    }

    return sum;
}

const myNumStr = (2n ** 1000n).toString();
const numArr = myNumStr.split("").map(n => parseInt(n));

console.log(sum(numArr));
// 1366

export { };
