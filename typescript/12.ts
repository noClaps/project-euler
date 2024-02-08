function factorsLength(n: number): number {
  if (n === 1) {
    return 1;
  }

  let factors = 0;
  for (let i = 1; i <= Math.sqrt(n); i++) {
    if (n % i == 0) {
      factors += 2;
    }
  }

  return factors;
}

let i = 1;
let num = 0;
while (factorsLength(num) < 500) {
  num += i;
  i++;
}

console.log(num);
// 76576500

export {};
