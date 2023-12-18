import Foundation

func factorsLength(_ n: Int) -> Int {
  if n == 1 {
    return 1
  }

  var factors = 0
  for i in stride(from: 1, to: Int(sqrt(Double(n))), by: 1) {
    if n % i == 0 {
      factors += 2
    }
  }

  return factors
}

var i = 1
var num = 0

while factorsLength(num) < 500 {
  num += i
  i += 1
}

print(num)
// 76_576_500
