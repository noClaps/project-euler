function factorLen(n)
	factorsLength = 0
	for i = 1:isqrt(n)
		if n % i === 0
			factorsLength += 2
		end
	end

	return factorsLength
end

num = 1
triangleNum = 0
while factorLen(triangleNum) < 500
	global triangleNum += num
	global num += 1
end

println(triangleNum)
# 76576500
