let sum = 0;
let a = 1;
let b = 2;

while (a < 4e6) {
    if (a % 2 == 0) {
        sum += a;
    }

    [a, b] = [b, a + b];
}

console.log(sum);
// 4613732

export {}
