let maxRem = 0;
let maxDiv = 0;

for (let divisor = 2; divisor <= 1000; divisor++) {
  let dividend = 1;
  const remainders: number[] = [];

  while (dividend % divisor !== 0) {
    while (dividend / divisor < 1) {
      dividend *= 10;
    }

    const partialQ = Math.floor(dividend / divisor);
    const remainder = dividend % divisor;

    if (remainders.includes(remainder)) break;

    remainders.push(remainder);
    dividend -= divisor * partialQ;
  }

  if (remainders.length > maxRem) {
    maxRem = remainders.length;
    maxDiv = divisor;
  }
}

console.log(maxDiv);
// 983
