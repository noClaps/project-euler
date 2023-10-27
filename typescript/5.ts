// 2520 is the smallest number that can be divided by each of the numbers
// from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the
// numbers from 1 to 20?

const primes = [2, 3, 5, 7, 11, 13, 17, 19];
let product = 1;

for (const i of primes) {
    product *= i ** Math.floor(Math.log(20) / Math.log(i));
}

console.log(product);
// 232792560

export {}
