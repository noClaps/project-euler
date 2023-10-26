// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10,001st prime number?

const primes = [2, 3, 5, 7, 11, 13];

let n = 14;
while (primes.length < 10_001) {
    if (!primes.some(prime => n % prime === 0)) {
        primes.push(n);
    }
    n++;
}

console.log(primes[10_000]);
// 104743
