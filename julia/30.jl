total = 0

for a = 2:5(9^5)
	if sum([parse(Int, c)^5 for c in split("$a", "")]) === a
		global total += a
	end
end

println(total)
# 443839
