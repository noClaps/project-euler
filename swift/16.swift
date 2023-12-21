import Foundation

var arr = [1]

for _ in 1...1000 {
  arr = arr.map({ $0 * 2 })
  for i in 1...arr.count {
    if arr[arr.endIndex - i] >= 10 {

      if arr.endIndex - i != 0 {
        arr[arr.endIndex - i - 1] += 1
      } else {
        arr.insert(1, at: 0)
      }

      arr[arr.endIndex - i] -= 10 * Int(log10(Double(arr[arr.endIndex - i])))
    }
  }

}

let sum = arr.reduce(0, +)
print(sum)
// 1366
