ans = 0
for a = 1:1000
	for b = 1:1000
		for c = 1:1000
			if a^2 + b^2 === c^2 && a + b + c === 1000
				global ans = a*b*c
				break
			end
		end
	end
end

println(ans)
# 31875000
