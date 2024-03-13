function factorial(num: number) {
  if (num <= 1) return 1;

  let fact = 1;
  for (let i = 2; i <= num; i++) {
    fact *= i;
  }

  return fact;
}

let permutations = 1e6;
const digits = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
const solution: number[] = [];

for (let i = 9; i >= 0; i--) {
  let a: number;
  const n = permutations / factorial(i);

  if (n > Math.floor(n)) {
    a = Math.floor(n);
  } else {
    a = Math.floor(n) - 1;
  }

  solution.push(digits[a]);
  if (digits.length > 1) {
    digits.splice(a, 1);
  }
  permutations = permutations - a * factorial(i);
}

const ans = solution.join("");
console.log(ans);
// 648
