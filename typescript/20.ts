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
