function smallestCommonMultiple(max: number): number {
    const primes = [2, 3, 5, 7, 11, 13, 17, 19];
    let product = 1;

    for (const i of primes) {
        product *= i ** Math.floor(Math.log(max) / Math.log(i));
    }

    return product;
}

console.log(smallestCommonMultiple(20));