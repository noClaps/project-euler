import Foundation

func sumOfDivisors(_ num: Int) -> Int {
  var sum = 0

  for i in 1...Int(sqrt(Double(num))) {
    if num % i == 0 {
      sum += i
      sum += Int(num / i)
    }
  }

  return sum - num
}

var sum = 0
for i in 1..<10000 {
  let n1 = sumOfDivisors(i)
  let n2 = sumOfDivisors(n1)

  if n2 == i && n1 != n2 {
    sum += i
  }
}

print(sum)
// 31626
