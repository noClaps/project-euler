function pascalTriangle(n: number) {
  const needToGenerate = 2 * n - 3;
  const triangle = [[1, 1]];
  for (let i = 0; i <= needToGenerate; i++) {
    const triangleRow = [1];
    for (let j = 1; j < triangle[i].length; j++) {
      triangleRow.push(triangle[i][j - 1] + triangle[i][j]);
    }
    triangleRow.push(1);
    triangle.push(triangleRow);
  }

  return triangle;
}

const num = 20;
const triangle = pascalTriangle(num);
let sum = 0;

for (let i = num - 2, j = 0; i < triangle.length, j <= num; i++, j++) {
  sum += triangle[i][j];
}

console.log(sum);
// 137846528820

export {};
