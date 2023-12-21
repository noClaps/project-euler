let num = 600851475143;
let divisor = 3;
while (divisor <= num) {
    if (num % divisor == 0) {
        num /= divisor;
    } else {
        divisor += 2;
    }
}

console.log(divisor);
// 6857

export {}
