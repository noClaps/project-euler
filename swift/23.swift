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

var abuntants = Array(repeating: false, count: 28124)
for i in 12...28111 {
  abuntants[i] = isAbundant(i) ? true : false
}

var sumOfAbundants = Array(repeating: false, count: 28124)
for i in 12...28111 {
  for j in 12...28111 where i + j <= 28123 {
    if abuntants[i] && abuntants[j] {
      sumOfAbundants[i + j] = true
    }
  }
}

var sum = 0
for i in 0...28123 {
  if !sumOfAbundants[i] {
    sum += i
  }
}

print(sum)
// 4_179_871
