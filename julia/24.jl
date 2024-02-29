permutations = 1_000_000
digits = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
solution = []

for i = 9:-1:0
	a = 0
	n = permutations/factorial(i)

	if n > floor(n)
		a = floor(Int,n)
	else
		a = floor(Int,n)-1
	end

	push!(solution, digits[a+1])
	popat!(digits, a+1)

	global permutations = permutations - a*factorial(i)
end

ans = join(solution)

println(ans)
# 2783915460
