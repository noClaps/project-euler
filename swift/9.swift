import Foundation

var prod = 0

for a in stride(from: 1, to: 1e3, by: 1) {
  for b in stride(from: a, to: 1e3 - a, by: 1) {
    if 500 + (a * b) / 1000 == (a + b) {
      prod = Int(a * b * (1000 - a - b))
    }
  }
}

print(prod)
// 31_875_000
