import Foundation

var maxRem = 0
var maxDiv = 0
for divisor in 2..<1000 {
  var dividend = 1
  var quotient: [Int] = []
  var remainders: [Int] = []

  while dividend % divisor != 0 {
    while dividend / divisor < 1 {
      dividend *= 10
    }

    let partialQ = dividend / divisor
    let remainder = dividend % divisor

    if remainders.contains(remainder) {
      break
    }

    remainders.append(remainder)
    quotient.append(partialQ)
    dividend -= divisor * partialQ
  }

  if remainders.count > maxRem {
    maxRem = remainders.count
    maxDiv = divisor
  }
}

print(maxDiv)
// 983
