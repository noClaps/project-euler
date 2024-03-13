let a = 1n;
let b = 1n;
let counter = 1;

while (`${a}`.length < 1000) {
  let temp = a;
  a = b;
  b += temp;
  counter++;
}

console.log(counter);
// 4782
