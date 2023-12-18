import Foundation

func isPrime(_ n: Int) -> Bool {
  if n % 3 == 0 {
    return false
  }

  let lim = Int(sqrt(Double(n)))
  var f = 5
  while f <= lim {
    if n % f == 0 {
      return false
    }

    if n % (f + 2) == 0 {
      return false
    }

    f += 6
  }

  return true
}

var sum = 2 + 3 + 5 + 7
for i in stride(from: 11, to: 2_000_000, by: 2) {
  if isPrime(i) {
    sum += i
  }
}

print(sum)
// 142_913_828_922
