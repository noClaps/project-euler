let currentMax = 0;
for (let i = 999; i >= 100; i--) {
    for (let j = i; j >= 100; j--) {
        const numStr = (i * j).toString();
        if (numStr === numStr.split("").reverse().join("") && i * j > currentMax) {
            currentMax = i * j;
        }
    }
}

console.log(currentMax);
// 906609

export {}
