import Foundation

func isAbundant(_ num: Int) -> Bool {
  var sum = 0

  for i in 1...Int(sqrt(Double(num))) {
    if num % i == 0 {
      sum += i

      if Int(num / i) != i {
        sum += Int(num / i)
      }
    }
  }

  return sum - num > num
}

var abundants = Array(12...28111).filter(isAbundant(_:))
var ans = Array(repeating: true, count: 28123)

for num in 24...28123 {
  for i in abundants where abundants.contains(num - i) {
    // Number is sum of 2 abundants -> incorrect
    ans[num - 1] = false
    break
  }
}

var sum = 0
for i in 0..<ans.count {
  sum += ans[i] ? i + 1 : 0
}

print(sum)
// 4_179_871
