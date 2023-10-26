// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143?

let num = 600851475143;
let divisor = 2;
while (divisor <= num) {
    if (num % divisor == 0) {
        num /= divisor;
    } else {
        divisor++;
    }
}

console.log(divisor);
// 6857
