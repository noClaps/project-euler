nums = Set()

for a = 2:100
	for b = 2:100
		push!(nums, big(a)^b)
	end
end

println(length(nums))
# 9183
