sum = 1
counter = 1
x = 1001

for i = 1:div(x-1, 2)
	for _ = 1:4
		global counter += 2i
		global sum += counter
	end
end

println(sum)
# 669171001
