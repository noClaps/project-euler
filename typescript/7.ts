// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10,001st prime number?

import { primeChecker } from "./lib";

const primes = [2, 3, 5, 7, 11, 13];
let n = 17;

while (primes.length < 10_001) {
    if (primeChecker(primes, n)) {
        primes.push(n);
    }
    n += 2;
}

console.log(primes[10_000]);
// 104743

export { };
