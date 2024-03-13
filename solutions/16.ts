let sum = 0;
for (const char of `${2n ** 1000n}`) {
  sum += +char;
}

console.log(sum);
// 1366
