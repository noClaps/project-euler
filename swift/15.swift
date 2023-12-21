func pascalTriangle(_ n: Int) -> [[Int]] {
  let needToGenerate = 2 * n - 3
  var triangle = [[1, 1]]

  for i in 0...needToGenerate {
    var triangleRow = [1]
    for j in 1..<triangle[i].count {
      triangleRow.append(triangle[i][j - 1] + triangle[i][j])
    }
    triangleRow.append(1)
    triangle.append(triangleRow)
  }

  return triangle
}

let num = 20
let triangle = pascalTriangle(num)
var sum = 0

var i = num - 2
var j = 0
while i < triangle.count && j <= num {
  sum += triangle[i][j]

  i += 1
  j += 1
}

print(sum)
// 137_846_528_820
