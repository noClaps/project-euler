function isPrime(n)
	if n <= 1
		return false
	end

	for i = 2:isqrt(n)
		if n%i === 0
			return false
		end
	end

	return true
end


maxCount = 0
maxAB = 0
for a = -999:999
	for b = -1000:1000
		primeCounter = 0
		n = 0
		while isPrime(n^2 + a*n + b)
			primeCounter += 1
			n += 1
		end
		if primeCounter > maxCount
			global maxCount = primeCounter
			global maxAB = a*b
		end
	end
end

println(maxAB)
# -59231
