function primeChecker(primes: number[], valueToCheck: number): boolean {
    for (let i = 0; i < primes.length && primes[i] <= Math.sqrt(valueToCheck); i++) {
        if (valueToCheck % primes[i] == 0) {
            return false;
        }
    }

    return true;
}

function sumOfArray(numArray: number[]): number {
    let sum = 0;
    for (const num of numArray) {
        sum += num;
    }

    return sum;
}

export { primeChecker, sumOfArray };
