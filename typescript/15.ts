// Starting in the top left corner of a 2 x 2 grid, and only being able to move
// to the right and down, there are exactly 6 routes to the bottom right corner.
//
// How many such routes are there through a 20 x 20 grid?

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

export { };
