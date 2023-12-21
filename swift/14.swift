func collatzLength(n: Int, lengths: [Int]) -> Int {
  var count = 1
  var n = n

  while n != 1 {
    if n < lengths.count {
      count += lengths[n] - 1
      break
    }

    if n % 2 == 0 {
      n /= 2
    } else {
      n = 3 * n + 1
    }

    count += 1
  }

  return count
}

var lengths = [0]
for i in 1..<1_000_000 {
  let colLength = collatzLength(n: i, lengths: lengths)
  lengths.append(colLength)
}

let maxVal = lengths.reduce(0, max)
let maxIndex = lengths.lastIndex(of: maxVal)! as Int

print(maxIndex)
// 837799
