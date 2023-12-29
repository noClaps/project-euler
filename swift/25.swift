import Foundation

var a: [Int] = [1]
var b: [Int] = [1]
var counter = 1

while a.count < 1000 {
  let temp = a
  a = b

  for t in 1...temp.count {
    b[b.endIndex - t] += temp[temp.endIndex - t]
  }

  while b.contains(where: { $0 >= 10 }) {
    for i in 1...b.count {
      if b[b.endIndex - i] >= 10 {
        if b.endIndex - i == 0 {
          b.insert(1, at: 0)
        } else {
          b[b.endIndex - i - 1] += 1
        }
        b[b.endIndex - i] -= 10
      }
    }
  }

  counter += 1
}

print(counter)
// 4782
