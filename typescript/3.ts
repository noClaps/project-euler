function largestPrimeFactor(num: number): number {
    let divisor = 2;
    while (divisor <= num) {
        if (num % divisor == 0) {
            num /= divisor;
        } else {
            divisor++;
        }
    }

    return divisor
}

console.log(largestPrimeFactor(600851475143))