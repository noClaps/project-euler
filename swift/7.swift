import Foundation

func isPrime(_ n: Int) -> Bool {

  if n == 1 {
    return false
  }

  if n < 4 {
    return true
  }

  if n % 2 == 0 {
    return false
  }

  if n < 9 {
    return true
  }

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

let limit = 10001
var count = 1
var candidate = 1

while count != limit {
  candidate += 2

  if isPrime(candidate) {
    count += 1
  }
}

print(candidate)
// 104743
