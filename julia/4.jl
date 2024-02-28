pal = 0
for a = 999:-1:100
	for b = 999:-1:100
		if string(a*b) === reverse(string(a*b)) && a*b > pal
			global pal = a*b
		end
	end
end

println(pal)
# 906609
