import Foundation

func generateNum() -> Int {
  var vals = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9"]

  var num = ""

  for _ in 0..<vals.count {
    let n = vals[Int.random(in: 0..<vals.count)]
    num += n
    vals.removeAll(where: { $0 == n })
  }

  return Int(num)!
}

func factorial(_ n: Int) -> Int {
  var prod = 1
  for i in 2...n {
    prod *= i
  }

  return prod
}

var nums: Set<Int> = []

while nums.count < factorial(10) {
  nums.update(with: generateNum())
}

let sortedNums = nums.sorted()
print(sortedNums[999999])
// 2_783_915_460
