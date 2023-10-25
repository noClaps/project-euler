function fibonacciEvenSum(max: number): number {
    let sum = 0
    let a = 1
    let b = 2

    while (a < max) {
        if (a % 2 == 0) {
            sum += a
        }

        [a, b] = [b, a+b]
    }

    return sum
}

console.log(fibonacciEvenSum(4e6))