function palindromeCheck(num: number): boolean {
    const numStr = num.toString();
    return numStr === numStr.split("").reverse().join("");
}

let currentMax = 0;
for (let i = 999; i >= 100; i--) {
    for (let j = i; j >= 100; j--) {
        if (palindromeCheck(i * j) && i * j > currentMax) {
            currentMax = i * j
        }
    }
}

console.log(currentMax)