import Foundation

func sumOfSquares(max: Int) -> Int {
  var sum = 0

  for i in 1...max {
    sum += Int(pow(Double(i), 2))
  }

  return sum
}

func squareOfSum(max: Int) -> Int {
  var sum = 0

  for i in 1...max {
    sum += i
  }

  return Int(pow(Double(sum), 2))
}

print(abs(squareOfSum(max: 100) - sumOfSquares(max: 100)))
// 25_164_150
