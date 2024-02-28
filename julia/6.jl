function sumOfSquares()
	sum = 0
	for i = 1:100
		sum += i^2
	end

	return sum
end

function squareOfSum()
	sum = 0
	for i = 1:100
		sum += i
	end

	return sum^2
end

println(squareOfSum() - sumOfSquares())
# 25164150
