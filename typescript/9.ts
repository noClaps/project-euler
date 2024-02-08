let prod = 0;
for (let a = 1; a < 1000; a++) {
  for (let b = a; b < 1000 - a; b++) {
    for (let c = b; c < 1000 - b; c++) {
      if (a ** 2 + b ** 2 === c ** 2 && a + b + c === 1000) {
        prod = a * b * c;
      }
    }
  }
}

console.log(prod);
// 31875000

export {};
