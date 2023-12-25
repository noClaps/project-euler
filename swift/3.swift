import Foundation

var n = 600_851_475_143
var quotient = 3

while quotient <= n {
  if n % quotient == 0 {
    n /= quotient
  } else {
    quotient += 2
  }
}

print(quotient)
// 6857
