var a = 1
var b = 2
var sum = 0

while b < 4_000_000 {
  (a, b) = (b, a + b)

  if a % 2 == 0 {
    sum += a
  }
}

print(sum)
// 4_613_732
