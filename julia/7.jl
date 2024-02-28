function isPrime(n)
	for i = 2:isqrt(n)
		if n % i === 0
			return false
		end
	end

	return true
end

counter = 0
prime = 0
n = 0
while counter !== 10001
	if isPrime(n)
		global prime = n
		global counter += 1
	end
	global n += 1
end

println(prime)
# 104723
