import Foundation

func isPrime(_ n: Int) -> Bool {
  if n <= 1 {
    return false
  }

  if n <= 3 {
    return true
  }

  for i in 2...Int(sqrt(Double(n))) {
    if n % i == 0 {
      return false
    }
  }

  return true
}

var maxVal = 0
var maxPrimes = 0
for a in -999...999 {
  for b in -1000...1000 {
    var primes: [Int] = []
    var n = 0
    while isPrime(n * n + a * n + b) {
      n += 1
      primes.append(n * n + a * n + b)
    }

    if primes.count > maxPrimes {
      maxPrimes = primes.count
      maxVal = a * b
    }
  }
}

print(maxVal)
// -59231
