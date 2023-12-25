import Foundation

func factorial(_ n: Int) -> [Int] {
  var prod = [1]
  for val in 1...n {
    prod = prod.map { $0 * val }

    while prod.contains(where: { $0 > 10 }) {
      for i in 1...prod.count {
        if prod[prod.endIndex - i] >= 10 {
          let power = Int(prod[prod.endIndex - i] / 10)

          if prod.endIndex - i == 0 {
            prod.insert(power, at: 0)
          } else {
            prod[prod.endIndex - i - 1] += power
          }

          prod[prod.endIndex - i] -= 10 * power
        }
      }
    }
  }

  return prod
}

func sumOfArray(_ arr: [Int]) -> Int {
  var sum = 0

  for val in arr {
    sum += val
  }

  return sum
}

print(sumOfArray((factorial(100))))
// 648
