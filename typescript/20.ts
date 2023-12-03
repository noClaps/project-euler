// n! means n * (n - 1) * ... * 3 * 2 * 1.
// For example, 10! = 10 * 9 * ... * 3 * 2 * 1 = 3628800, and the sum of the
// digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
// Find the sum of the digits in the number 100!.

function factorial(n: number) {
    let prod = 1n;
    for (let i = BigInt(n); i >= 1; i--) {
        prod *= i;
    }

    return prod;
}

const myStr = factorial(100).toString();
const sum = myStr.split("").map(i => parseInt(i)).reduce((sum, i) => sum += i);

console.log(sum)
// 648

export { };
