let oneToNine = [3, 3, 5, 4, 4, 3, 5, 5, 4]
let elevenToNineteen = [6, 6, 8, 8, 7, 7, 9, 8, 8]
let tens = [6, 6, 5, 5, 5, 7, 6, 6]

var strlen = 0

func oneToNinetyNine() -> Int {
  var oneToNinetyNine = 0

  // 1...9
  for num in oneToNine {
    oneToNinetyNine += num
  }

  // 10
  oneToNinetyNine += 3

  // 11...19
  for num in elevenToNineteen {
    oneToNinetyNine += num
  }

  // 20...99
  var twentyToNinetyNine = 0
  for tenNum in tens {
    twentyToNinetyNine += tenNum
    for num in oneToNine {
      twentyToNinetyNine += tenNum + num
    }
  }

  oneToNinetyNine += twentyToNinetyNine

  return oneToNinetyNine
}

func oneHundredTo999() -> Int {
  var oneHundredTo999 = 0

  for one in oneToNine {
    // onehundred, twohundred, ...
    oneHundredTo999 += one + 7

    // onehundredand + (one+two+three+four+...+ninetynine)
    // twohundredand + (one+two+three+four+...+ninetynine)
    // threehundredand + (one+two+three+four+...+ninetynine)
    oneHundredTo999 += (one + 7 + 3) * 99 + oneToNinetyNine()
  }

  return oneHundredTo999
}

strlen += oneToNinetyNine()
strlen += oneHundredTo999()

// onethousand
strlen += 11

print(strlen)
// 21124
