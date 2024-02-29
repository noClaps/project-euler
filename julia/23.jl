function isAbundant(n)
	factorSum = 0
	for i = 1:isqrt(n)
		if n % i === 0
			factorSum += div(n, i) === i ? i : (i + div(n, i))
		end
	end

	return factorSum-n > n
end

function isSumOfAbundants(n, arr)
	for i = 1:div(n, 2)+1
		op1 = i
		op2 = n - i
		if arr[op1] && arr[op2]
			return true
		end
	end

	return false
end

abundants = [false for _ in 0:28123] # why?
for i = 12:28123-12
	global abundants[i] = isAbundant(i)
end

notAbundantSum = 0
for i = 1:28123
	if !isSumOfAbundants(i, abundants)
		global notAbundantSum += i
	end
end

println(notAbundantSum)
# 4179871
