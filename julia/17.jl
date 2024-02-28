oneToNine = [3, 3, 5, 4, 4, 3, 5, 5, 4]
elevenToNineteen = [6, 6, 8, 8, 7, 7, 9, 8, 8]
tens = [6, 6, 5, 5, 5, 7, 6, 6]

function oneToNinetyNine()
	str = 0

	# 1...9
	str += sum(oneToNine)

	# 10
	str += 3

	# 11...19
	str += sum(elevenToNineteen)

	# 20...99
	for tenNum in tens
		str += tenNum
		str += sum(oneToNine .+ tenNum)
	end

	return str
end

function oneHundredTo999()
	str = 0

	for one in oneToNine
		# 100, 200, ...
		str += one + 7

		# onehundredand + (1+2+3+...)
		str += (one+7+3)*99 + oneToNinetyNine()
	end

	return str
end

strlen = 0

strlen += oneToNinetyNine()
strlen += oneHundredTo999()

# onethousand
strlen += 11

println(strlen)
# 21124
