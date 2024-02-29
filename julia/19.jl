numOfSundays = 0
months = [6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4]
monthsLeap = [5, 1, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4]

# 1901-1999
for year = 1901:1999
	yearCode = (year-1900) + div(year-1900, 4) + 1

	for month = 1:12
		if (year % 4 === 0 && year % 100 !== 0) || year % 400 === 0
			monthCode = monthsLeap[month]
			if (yearCode + monthCode + 1) % 7 === 0
        		global numOfSundays += 1
      		end
		else
			monthCode = months[month]
      		if (yearCode + monthCode + 1) % 7 === 0
      		  	global numOfSundays += 1
      		end
		end
	end
end

# 2000
yearCode = 0
for month = 1:12
	# 2000 was a leap year
  	monthCode = monthsLeap[month]
	if (yearCode + monthCode + 1) % 7 === 0
		global numOfSundays += 1
  	end
end

println(numOfSundays)
# 171
