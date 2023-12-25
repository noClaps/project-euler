var numOfSundays = 0
let months = [6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4]
let monthsLeap = [5, 1, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4]

// 1901-1999
for year in 1901..<2000 {
  let yearCode = (year - 1900) + ((year - 1900) / 4) + 1

  for month in 0...11 {
    if (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 {
      let monthCode = monthsLeap[month]
      if (yearCode + monthCode + 1) % 7 == 0 {
        numOfSundays += 1
      }
    } else {
      let monthCode = months[month]
      if (yearCode + monthCode + 1) % 7 == 0 {
        numOfSundays += 1
      }
    }
  }
}

// 2000
let yearCode = 0
for month in 0...11 {
  // 2000 was a leap year
  let monthCode = monthsLeap[month]
  if (yearCode + monthCode + 1) % 7 == 0 {
    numOfSundays += 1
  }
}

print(numOfSundays)
// 171
