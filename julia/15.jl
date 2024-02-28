function pascalTriangle(n)
	needToGenerate = 2n-3
	triangle = [[1, 1]]

	for i = 1:needToGenerate
		triangleRow = [1]
		for j = 2:length(triangle[i])
			push!(triangleRow, triangle[i][j-1] + triangle[i][j])
		end

		push!(triangleRow, 1)
		push!(triangle, triangleRow)
	end

	return triangle
end

num = 21 # Julia is 1-indexed (for some reason)
triangle = pascalTriangle(num)
sum = 0

i = num-2
j = 1

while i < length(triangle) && j <= num
	global sum += triangle[i][j]

	global i += 1
	global j += 1
end

println(sum)
# 137846528820
