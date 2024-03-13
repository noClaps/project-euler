const nums = new Set<BigInt>();

for (let a = 2n; a <= 100; a++) {
  for (let b = 2n; b <= 100; b++) {
    nums.add(a ** b);
  }
}

console.log(nums.size);
// 9183
