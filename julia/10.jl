function isPrime(n)
	for i = 2:isqrt(n)
		if n%i === 0
			return false
		end
	end

	return true
end

sum = 0
for i = 2:2_000_000
	if isPrime(i)
		global sum += i
	end
end

println(sum)
# 142913828922
