import Foundation

func isAbundant(_ num: Int) -> Bool {
  var sum = 0

  for i in 1...Int(sqrt(Double(num))) {
    if num % i == 0 {
      sum += (Int(num / i) == i) ? i : (i + Int(num / i))
    }
  }

  return sum - num > num
}

func isSumOfAbundant(test: Int, arr: [Bool]) -> Bool {
  for i in 0...Int(test / 2) {
    let op1 = i
    let op2 = test - i
    if arr[op1] && arr[op2] {
      return true
    }
  }

  return false
}

var abundants = Array(repeating: false, count: 28124)
for i in 12...28111 {
  abundants[i] = isAbundant(i) ? true : false
}

var sum = 0
for i in 1...28123 {
  if !isSumOfAbundant(test: i, arr: abundants) {
    sum += i
  }
}

print(sum)
// 4_179_871
