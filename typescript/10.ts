import { primeChecker, sumOfArray } from "./lib";

const primes: number[] = [];
const max = 2e6;

for (let i = 2; i <= max; i++) {
    if (primeChecker(primes, i)) {
        primes.push(i);
    }
}

console.log(sumOfArray(primes));
// 142913828922

export { };
