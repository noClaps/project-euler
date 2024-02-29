function d(n)
	divisorSum = 1
	for i = 2:isqrt(n)
		if n % i === 0
			divisorSum += i
			divisorSum += div(n, i)
		end
	end

	return divisorSum
end

amicableSum = 0
for a = 1:10000
	n1 = d(a)
	n2 = d(n1)

	if n2 === a && n1 !== n2
		global amicableSum += a
	end
end

println(amicableSum)
# 31626
