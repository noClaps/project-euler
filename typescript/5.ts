const primes = [2, 3, 5, 7, 11, 13, 17, 19];
let product = 1;

for (const i of primes) {
    product *= i ** Math.floor(Math.log(20) / Math.log(i));
}

console.log(product);
// 232792560

export {}
