function sumOfSquares(max: number): number {
  let sum = 0;

  for (let i = 1; i <= max; i++) {
    sum += i ** 2;
  }

  return sum;
}

function squareOfSum(max: number): number {
  let sum = 0;

  for (let i = 1; i <= max; i++) {
    sum += i;
  }

  return sum ** 2;
}

console.log(Math.abs(squareOfSum(100) - sumOfSquares(100)));
// 25164150

export {};
