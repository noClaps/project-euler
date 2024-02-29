maxRem = 0
maxDiv = 0

for divisor = 2:999
	dividend = 1
	remainders = []

	while dividend % divisor !== 0
		while dividend / divisor < 1
			dividend *= 10
		end

		remainder = dividend % divisor

		if remainder in remainders
			break
		end

		push!(remainders, remainder)
		dividend -= divisor * div(dividend, divisor)
	end

	if length(remainders) > maxRem
		global maxRem = length(remainders)
		global maxDiv = divisor
	end
end

println(maxDiv)
# 983
