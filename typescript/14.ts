function collatzLength(n: number, lengths: number[]): number {
    let count = 1;

    while (n !== 1) {
        if (n < lengths.length) {
            count += lengths[n] - 1;
            break;
        }

        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }

        count++;
    }

    return count;
}

const lengths = [0];
for (let i = 1; i < 1e6; i++) {
    const colLength = collatzLength(i, lengths);
    lengths.push(colLength);
}

const maxVal = lengths.reduce((a, b) => Math.max(a, b), 0);
const maxIndex = lengths.findIndex(val => val === maxVal);
console.log(maxIndex);
// 837799

export { };
