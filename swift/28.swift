var sum = 1
var counter = 1
let x = 1001

for i in 1...(x - 1) / 2 {
  for _ in 1...4 {
    counter += 2 * i
    sum += counter
  }
}

print(sum)
// 669_171_001
