n = 600851475143
maxFactor = 1
for i = 2:isqrt(n)
	while n % i === 0
		global n = div(n, i)
		global maxFactor = i
	end
end

println(maxFactor)
# 6857
