import Foundation

func factorial(_ n: Int) -> Int {
  if n <= 1 {
    return 1
  }

  var prod: Int = 1
  for i in 2...n {
    prod *= i
  }

  return prod
}

var permutations = 1_000_000
var digits = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
var solution: [Int] = []

for i in stride(from: 9, through: 0, by: -1) {
  var a: Int
  let n = Double(permutations) / Double(factorial(i))

  if n > floor(n) {
    a = Int(n)
  } else {
    a = Int(n) - 1
  }

  solution.append(digits[Int(a)])
  if digits.count > 1 {
    digits.remove(at: Int(a))
  }
  permutations = permutations - a * factorial(i)
}

let ans = solution.map({ "\($0)" }).joined()

print(ans)
// 2_783_915_460
