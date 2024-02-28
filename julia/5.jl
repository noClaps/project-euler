function divisibility(n)
	for i = 2:20
		if n % i !== 0
			return false
		end
	end

	return true
end

num = 2520
while !divisibility(num)
	global num += 1
end

println(num)
# 232792560
