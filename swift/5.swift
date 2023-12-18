import Foundation

let primes = [2, 3, 5, 7, 11, 13, 17, 19]
var product = 1

for i in primes {
  product *= Int(pow(Double(i), floor(log(20) / log(Double(i)))))
}

print(product)
// 232_792_560
