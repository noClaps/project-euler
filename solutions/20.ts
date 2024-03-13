function factorial(num: number) {
  let fact = 1n;
  for (let i = 1n; i <= num; i++) {
    fact *= i;
  }

  return fact;
}

let sum = 0;
for (const char of `${factorial(100)}`) {
  sum += +char;
}

console.log(sum);
// 648
