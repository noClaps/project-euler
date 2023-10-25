function sumOf3Or5(num: number): number {
    let sum = 0;

    for (let i = 0; i < num; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    return sum;
}

console.log(sumOf3Or5(1000));