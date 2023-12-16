// A palindromic number reads the same both ways. The largest palindrome made
// from the product of two 2-digit numbers is 9009 = 91 x 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

var currentMax = 0
for i in stride(from: 999, to: 100, by: -1) {
  for j in stride(from: i, to: 100, by: -1) {
    let numStr = "\(i*j)"
    if String(numStr.reversed()) == numStr && i * j > currentMax {
      currentMax = i*j
    }
  }
}

print(currentMax)
// 906609
