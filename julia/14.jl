function collatzLen(n)
	chainLength = 0

	while n !== 1
		if n%2 === 0
			n = div(n,2)
		else
			n = 3n + 1
		end
		chainLength += 1
	end

	return chainLength
end

maxLen = 0
maxNum = 0
for i = 1:1_000_000
	if collatzLen(i) > maxLen
		global maxLen = collatzLen(i)
		global maxNum = i
	end
end

println(maxNum)
# 837799
